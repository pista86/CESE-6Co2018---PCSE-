#!/bin/perl

#
# Copyright 2018, Cypress Semiconductor Corporation or a subsidiary of 
 # Cypress Semiconductor Corporation. All Rights Reserved.
 # This software, including source code, documentation and related
 # materials ("Software"), is owned by Cypress Semiconductor Corporation
 # or one of its subsidiaries ("Cypress") and is protected by and subject to
 # worldwide patent protection (United States and foreign),
 # United States copyright laws and international treaty provisions.
 # Therefore, you may use this Software only as provided in the license
 # agreement accompanying the software package from which you
 # obtained this Software ("EULA").
 # If no EULA applies, Cypress hereby grants you a personal, non-exclusive,
 # non-transferable license to copy, modify, and compile the Software
 # source code solely for use in connection with Cypress's
 # integrated circuit products. Any reproduction, modification, translation,
 # compilation, or representation of this Software except as specified
 # above is prohibited without the express written permission of Cypress.
 #
 # Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
 # EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
 # WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Cypress
 # reserves the right to make changes to the Software without notice. Cypress
 # does not assume any liability arising out of the application or use of the
 # Software or any product or circuit described in the Software. Cypress does
 # not authorize its products for use in any products where a malfunction or
 # failure of the Cypress product may reasonably be expected to result in
 # significant property damage, injury or death ("High Risk Product"). By
 # including Cypress's product in a High Risk Product, the manufacturer
 # of such system or application assumes all risk of such use and in doing
 # so agrees to indemnify Cypress against all liability.
#

$host_os = $ENV{'HOST_OS'};
our $cp = "tools/common/$host_os/cp";
our $rm = "tools/common/$host_os/rm";

my $help = 0;
my $cmd_true = 0;
my $hcd_build = 0;
my $outCFileName;
my $no_hci_header = 0;
my $build_complete = 0;
my @build_args= "";
my $firmware_generated = 0;
my $error_status = 0;
my $hcd_path = "";
my $bt_sdk_path = "";
my $firmware_path = "./libraries/drivers/bluetooth/firmware";

#command line arguments should take the Wiced-SDK (20706/43012) make string as the argument and BT_SDK_PATH.

if(@ARGV != 4)
{
    $help = 1;
}

if($help)
{
    printf( "\n".
            "USAGE: auto_make.pl [Wiced-SDK make string] [BT_CHIP] [BT_XTAL_FREQ] [EMBEDDED_APP_NAME]\n".
            "       output is to STDOUT.\n".
            "\n" );
    exit -1;
}

my ($build_string) = $ARGV[0];
my ($bt_chip) = $ARGV[1];
my ($xtal_freq) = $ARGV[2];
my ($embedded_app_name) = $ARGV[3];
my $cmd = "./make";
my $clean = "clean";

if( $bt_chip eq "20706"  )
{
    $bt_sdk_path = "..//20706-A2_Bluetooth";
}
elsif( $bt_chip eq "43012" )
{
    $bt_sdk_path = "..//43012-C0_Bluetooth";
}

#Arguements for clean build
my @clean_args = ($cmd,"-C",$bt_sdk_path,$clean);

#Form the build arguments
if( $bt_chip eq "20706" )
{
    @build_args = ($cmd,"-C",$bt_sdk_path,$build_string,"FREQ=$xtal_freq","DIRECT_LOAD=1","build");
}
elsif( $bt_chip eq "43012" )
{
    @build_args = ($cmd,"-C",$bt_sdk_path,$build_string,"DIRECT_LOAD=1","build");
}

if(-f $cmd)
{
    system @clean_args;
    printf "$build_args;";
    my $return = system @build_args;
    if( $return != 0 )
    {
        $error_status = 1;
    }
    else
    {
        $cmd_true = 1;
        $error_status = 0;
    }
}
else
{
    die;
}

$outErrFileName  = "temp".".txt";
open( my $fp, '>', $outErrFileName ) || die;
binmode OUTFILE;

if( $error_status )
{
    printf $fp "1";
    close $fp;
}
else
{
    printf $fp "0";
    close $fp;
    #remove the created file
    `$rm temp.txt`;
}

if($cmd_true)
{
    if(-e "$bt_sdk_path//build")
    {
        printf("build folder exists\n");
        $build_complete = 1;
    }
}
else
{
    die "Build path not present";
}

if($build_complete)
{
    if( $bt_chip eq "20706" )
    {
        $hcd_path = "$bt_sdk_path//build//$embedded_app_name-CYW920706WCDEVAL-rom-ram-Wiced-release//$embedded_app_name-CYW920706WCDEVAL-rom-ram-Wiced-release.hcd";
    }
    elsif( $bt_chip eq "43012" )
    {
        $hcd_path = "$bt_sdk_path//build//$embedded_app_name-CYW943012FCBGA_DLNA-rom-ram-Wiced-release//$embedded_app_name-CYW943012FCBGA_DLNA-rom-ram-Wiced-release.hcd";
    }
    else
    {
        die "Build Not completed";
    }
}
else
{
    exit(1);
}

# Execute the hcd2.pl script to generate the firmware file
my @perl_args = ($^X,"$firmware_path//tools//hcd2c.pl","-fm",$embedded_app_name,$hcd_path);
system @perl_args;


#Copy the file to the respective path.
if( $bt_chip eq "20706" )
{
    unless( -e "$firmware_path/20706A2/40MHz/bt_firmware_embedded_back_$embedded_app_name.c" )
    {
        printf("Keeping a Back Up of the firmware... !\n");
        `$cp $firmware_path/20706A2/40MHz/bt_firmware_embedded_$embedded_app_name.c $firmware_path/20706A2/40MHz/bt_firmware_embedded_back_$embedded_app_name.c`;
    }

    `$cp bt_firmware_embedded_$embedded_app_name.c $firmware_path/20706A2/40MHz`;
    $firmware_generated = 1;
}
elsif( $bt_chip eq "43012" )
{
    unless( -e "$firmware_path/43012C0/37_4MHz/bt_firmware_embedded_back_$embedded_app_name.c" )
    {
        printf("Keeping a Back Up of the firmware... !\n");
        `$cp $firmware_path/43012C0/37_4MHz/bt_firmware_embedded_$embedded_app_name.c $firmware_path/43012C0/37_4MHz/bt_firmware_embedded_back_$embedded_app_name.c`;
    }

    `$cp bt_firmware_embedded_$embedded_app_name.c $firmware_path/43012C0/37_4MHz`;
    $firmware_generated =1;
}
else
{
    die "path doesn't exist";
    $firmware_generated = 0;
}

#remove the created file
`$rm bt_firmware_embedded_$embedded_app_name.c`;

if($firmware_generated == 0)
{
    exit(1);
}
else
{
    exit(0);
}
#########
#end of the file
