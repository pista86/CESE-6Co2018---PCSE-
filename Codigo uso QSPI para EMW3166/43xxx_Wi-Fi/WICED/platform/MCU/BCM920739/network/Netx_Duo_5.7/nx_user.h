/**************************************************************************/
/*                                                                        */
/*            Copyright (c) 1996-2013 by Express Logic Inc.               */
/*                                                                        */
/*  This software is copyrighted by and is the sole property of Express   */
/*  Logic, Inc.  All rights, title, ownership, or other interests         */
/*  in the software remain the property of Express Logic, Inc.  This      */
/*  software may only be used in accordance with the corresponding        */
/*  license agreement.  Any unauthorized use, duplication, transmission,  */
/*  distribution, or disclosure of this software is expressly forbidden.  */
/*                                                                        */
/*  This Copyright notice may not be removed or modified without prior    */
/*  written consent of Express Logic, Inc.                                */
/*                                                                        */
/*  Express Logic, Inc. reserves the right to modify this software        */
/*  without notice.                                                       */
/*                                                                        */
/*  Express Logic, Inc.                     info@expresslogic.com         */
/*  11423 West Bernardo Court               http://www.expresslogic.com   */
/*  San Diego, CA  92127                                                  */
/*                                                                        */
/**************************************************************************/


/**************************************************************************/
/**************************************************************************/
/**                                                                       */
/** NetX Component                                                        */
/**                                                                       */
/**   User Specific                                                       */
/**                                                                       */
/**************************************************************************/
/**************************************************************************/


/**************************************************************************/
/*                                                                        */
/*  PORT SPECIFIC C INFORMATION                            RELEASE        */
/*                                                                        */
/*    nx_user.h                                           PORTABLE C      */
/*                                                           5.7          */
/*                                                                        */
/*  AUTHOR                                                                */
/*                                                                        */
/*    William E. Lamie, Express Logic, Inc.                               */
/*                                                                        */
/*  DESCRIPTION                                                           */
/*                                                                        */
/*    This file contains user defines for configuring NetX in specific    */
/*    ways. This file will have an effect only if the application and     */
/*    NetX library are built with NX_INCLUDE_USER_DEFINE_FILE defined.    */
/*    Note that all the defines in this file may also be made on the      */
/*    command line when building NetX library and application objects.    */
/*                                                                        */
/*  RELEASE HISTORY                                                       */
/*                                                                        */
/*    DATE              NAME                      DESCRIPTION             */
/*                                                                        */
/*  12-12-2005     William E. Lamie         Initial Version 5.0           */
/*  08-09-2007     William E. Lamie         Modified comment(s),          */
/*                                            resulting in version 5.1    */
/*  12-30-2007     Yuxin Zhou               Modified comment(s), and      */
/*                                            added support for IPv6,     */
/*                                            resulting in version 5.2    */
/*  08-03-2009     William E. Lamie         Modified comment(s),          */
/*                                            resulting in version 5.3    */
/*  11-23-2009     Yuxin Zhou               Modified comment(s),          */
/*                                            resulting in version 5.4    */
/*  06-01-2010     Janet Christiansen       Addeded support for path MTU  */
/*                                            packet fragmentation logic, */
/*                                            added options for router    */
/*                                            solicitation, disabling RA, */
/*                                            ICMPv6 error message, and   */
/*                                            redirect, NetX Duo error    */
/*                                            checking and new features   */
/*                                            using stale cache entries,  */
/*                                            IPsec, static IP routing    */
/*                                            (IPv4), path MTU discovery, */
/*                                            resulting in version 5.5    */
/*  10-10-2011     Yuxin Zhou               Modified comment(s), added    */
/*                                            TCP window scaling and      */
/*                                            disable loopback interface  */
/*                                            options, added receive and  */
/*                                            transmit UDP packet checksum*/
/*                                            disable options, added      */
/*                                            options to disable ICMP     */
/*                                            checksum computation,       */
/*                                            resulting in version 5.6    */
/*  01-31-2013     Yuxin Zhou               Modified comment(s), added    */
/*                                            symbols to support IP raw   */
/*                                            recv queue max, raw filter, */
/*                                            IPv6 address change notify, */
/*                                            IPv6 autoconfig control,    */
/*                                            added new option            */
/*                                            NX_TCP_ENABLE_MSS_CHECK     */
/*                                            option to check connection  */
/*                                            requests for a minimum MSS  */
/*                                            value, added support for    */
/*                                            IPv6 join/leave operations, */
/*                                            added support for queue     */
/*                                            depth notify callback,      */
/*                                            resulting in version 5.7    */
/*                                                                        */
/**************************************************************************/

#ifndef NX_USER_H
#define NX_USER_H
#define WICED_CUSTOM_NX_USER_H
#define NX_DHCP_CLIENT_RESTORE_STATE

/* Define various build options for the NetX Duo port.  The application should either make changes
   here by commenting or un-commenting the conditional compilation defined OR supply the defines
   though the compiler's equivalent of the -D option.  */


/* Override various options with default values already assigned in nx_api.h or nx_port.h. Please
   also refer to nx_port.h for descriptions on each of these options.  */

/* Defined, this option bypasses the basic NetX error checking. This define is typically used
   after the application is fully debugged.  */
/*
#define NX_DISABLE_ERROR_CHECKING
*/


/* Defined, NX_ENABLE_IP_RAW_PACKET_FILTER allows an application to install a filter
   for incoming raw packets. This feature is disabled by default. */
/*
#define NX_ENABLE_IP_RAW_PACKET_FILTER
*/

/* NX_MAX_PHYSICAL_INTERFACES defines the number physical network interfaces
   present to NetX Duo IP layer.  Physical interface does not include
   loopback interface. By default there is at least one physical interface
   in the system. */
#define NX_MAX_PHYSICAL_INTERFACES    1


/* Configuration options for NetX Duo (IPv6) */

/* Disable IPv6 processing in NetX Duo.  */
/*
#define NX_DISABLE_IPV6
*/

/* Do not process IPv6 ICMP Redirect Messages. */
/*
#define NXDUO_DISABLE_ICMPV6_REDIRECT_PROCESS
*/

/* Do not process IPv6 Router Advertisement Messages. */
/*
#define NXDUO_DISABLE_ICMPV6_ROUTER_ADVERTISEMENT_PROCESS
*/

/* Do not send IPv6 Router Solicitation Messages. */
/*
#define NXDUO_DISABLE_ICMPV6_ROUTER_SOLICITATION
*/

/* Define the max number of router solicitations a host sends until a router response
   is received.  If no response is received, the host concludes no router is present. */

//#define NXDUO_ICMPV6_MAX_RTR_SOLICITATIONS      3


/* Define the interval between which the host sends router solicitations in seconds. */

//#define NXDUO_ICMPV6_RTR_SOLICITATION_INTERVAL  4


/* Do not send ICMPv6 Error Message. */
/*
#define NXDUO_DISABLE_ICMPV6_ERROR_MESSAGE
*/


/* If defined, application is able to control whether or not to perform IPv6 stateless
   address autoconfiguration with nxd_ipv6_stateless_address_autoconfig_enable() or
   nxd_ipv6_stateless_address_autoconfig_disable() service.  If defined, the system starts
   with IPv6 stateless address autoconfiguration enabled.  This feature is disabled by default. */
/*
#define NX_IPV6_STATELESS_AUTOCONFIG_CONTROL
*/

/* If enabled, application is able to install a callback function to get notified
   when an interface IPv6 address is changed. By default this feature is disabled. */
/*
#define NX_IPV6_ADDRESS_CHANGE_NOTIFY_ENALBE
*/




/* Disable the Duplicate Address Detection (DAD) protocol when configuring the host IP address. */

/*
#define NXDUO_DISABLE_DAD
*/

/* Defined, this option prevents NetX Duo from removing stale (old) cache table entries
   whose timeout has not expired so are otherwise still valid) to make room for new entries
   when the table is full.  Static and router entries are not purged.  */
/*
#define NX_IPV6_DISABLE_PURGE_UNUSED_CACHE_ENTRIES
*/


/* Configuration options for IPSEC */

/* This define enables IPSEC in NetX Duo.  */
/*
#define NX_IPSEC_ENABLE
*/

/*
#define NX_CRYPTO_MAX_IV_SIZE_IN_BITS
*/

/* This define specifies the size of the physical packet header. The default value is 16 (based on
   a typical 16-byte Ethernet header).  */

#define NX_PHYSICAL_HEADER          44


/* This define specifies the size of the physical packet trailer and is typically used to reserve storage
   for things like Ethernet CRCs, etc.  */

#define NX_PHYSICAL_TRAILER         0


/* This defines specifies the number of ThreadX timer ticks in one second. The default value is 100 (based
   on a 10ms ThreadX timer interrupt).  */
/*
#define NX_IP_PERIODIC_RATE         100
*/

/* This define specifies the number of seconds ARP entries remain valid. The default value of 0 disables
   aging of ARP entries.  */
/*
#define NX_ARP_EXPIRATION_RATE      0
*/


/* This define specifies the number of seconds between ARP retries. The default value is 10, which represents
   10 seconds.  */
/*
#define NX_ARP_UPDATE_RATE          10
*/

/* This define specifies how the number of system ticks (NX_IP_PERIODIC_RATE) is divided to calculate the
   timer rate for the TCP delayed ACK processing. The default value is 5, which represents 200ms.  */
/*
#define NX_TCP_ACK_TIMER_RATE       5
*/

/* This define specifies how the number of system ticks (NX_IP_PERIODIC_RATE) is divided to calculate the
   fast TCP timer rate. The fast TCP timer is used to drive various TCP timers, including the delayed ACK
   timer. The default value is 10, which represents 100ms.  */
/*
#define NX_TCP_FAST_TIMER_RATE      10
*/

/* This define specifies how the number of system ticks (NX_IP_PERIODIC_RATE) is divided to calculate the
   timer rate for the TCP transmit retry processing. The default value is 1, which represents 1 second.  */
/*
#define NX_TCP_TRANSMIT_TIMER_RATE  1
*/

/* This define specifies how many seconds of inactivity before the keepalive timer activates. The default
   value is 7200, which represents 2 hours.   */
/*
#define NX_TCP_KEEPALIVE_INITIAL    7200
*/

/* This define specifies how many seconds between retries of the keepalive timer assuming the other side
   of the connection is not responding. The default value is 75, which represents 75 seconds between
   retries.  */
/*
#define NX_TCP_KEEPALIVE_RETRY      75
*/


/* This define specifies the maximum number of RAW packets can be queued for receive.  The default
   value is 20.  */
/*
#define NX_IP_RAW_MAX_QUEUE_DEPTH 20
*/

/* This define specifies the maximum number of ARP retries made without an ARP response. The default
   value is 18.  */
/*
#define NX_ARP_MAXIMUM_RETRIES      18
*/


/* This defines specifies the maximum number of packets that can be queued while waiting for an ARP
   response. The default value is 4.  */
/*
#define NX_ARP_MAX_QUEUE_DEPTH      4
*/


/* Defined, this option disables entering ARP request information in the ARP cache.  */
/*
#define NX_ARP_DISABLE_AUTO_ARP_ENTRY
*/

/* This define enabled simple IPv6 multicast group join/leave function.  By default
   the IPv6 multicast join/leave function is not enabled. */
/*
#define NX_IPV6_MULTICAST_ENABLE
*/

/* This define specifies the maximum number of multicast groups that can be joined. The default value is
   7.  */
/*
#define NX_MAX_MULTICAST_GROUPS     7
*/


/* This define specifies the maximum number of TCP server listen requests. The default value is 10.  */
/*
#define NX_MAX_LISTEN_REQUESTS      10
*/


/* Defined, this option enables the optional TCP keepalive timer.  */
/*
#define NX_TCP_ENABLE_KEEPALIVE
*/


/* Defined, this option enables the optional TCP immediate ACK response processing.  */
/*
#define NX_TCP_IMMEDIATE_ACK
*/

/* This define specifies the number of TCP packets to receive before sending an ACK. */
/* The default value is 2: ack every 2 packets.                                      */
/*
#define NX_TCP_ACK_EVERY_N_PACKETS  2
*/

/* Automatically define NX_TCP_ACK_EVERY_N_PACKETS to 1 if NX_TCP_IMMEDIATE_ACK is defined.
   This is needed for backward compatibility. */
#if (defined(NX_TCP_IMMEDIATE_ACK) && !defined(NX_TCP_ACK_EVERY_N_PACKETS))
#define NX_TCP_ACK_EVERY_N_PACKETS 1
#endif


/* This define specifies how many transmit retires are allowed before the connection is deemed broken.
   The default value is 10.  */
/*
#define NX_TCP_MAXIMUM_RETRIES      10
*/


/* This define specifies the maximum depth of the TCP transmit queue before TCP send requests are
   suspended or rejected. The default value is 20, which means that a maximum of 20 packets can be in
   the transmit queue at any given time.  */
/*
#define NX_TCP_MAXIMUM_TX_QUEUE     20
*/


/* This define specifies how the retransmit timeout period changes between successive retries. If this
   value is 0, the initial retransmit timeout is the same as subsequent retransmit timeouts. If this
   value is 1, each successive retransmit is twice as long. The default value is 0.  */
/*
#define NX_TCP_RETRY_SHIFT          0
*/


/* This define specifies how many keepalive retries are allowed before the connection is deemed broken.
   The default value is 10.  */
/*
#define NX_TCP_KEEPALIVE_RETRIES    10
*/


/* Defined, this option enables the TCP window scaling feature. (RFC 1323). Default disabled. */
/*
#define NX_TCP_ENABLE_WINDOW_SCALING
*/

/* Defined, this option enables deferred driver packet handling. This allows the driver to place a raw
   packet on the IP instance and have the driver's real processing routine called from the NetX internal
   IP helper thread.  */
/*
#define NX_DRIVER_DEFERRED_PROCESSING
*/

/* Defined, this option disables NetX Duo support on the 127.0.0.1 loopback interface.
   127.0.0.1 loopback interface is enabled by default.  Uncomment out the follow code to disable
   the loopback interface. */
/*
#define NX_DISABLE_LOOPBACK_INTERFACE
*/


/* Defined, this option disables all IP fragmentation logic.  */
/*
#define NX_DISABLE_FRAGMENTATION
*/


/* Defiend, this option disables checksum logic on received ICMPv4 packets.
   Note that if NX_DISABLE_ICMP_RX_CHECKSUM is defined, this option is
   automatically defined. By default this option is not defined.*/
/*
#define NX_DISABLE_ICMPv4_RX_CHECKSUM
*/

/* Defiend, this option disables checksum logic on received ICMPv6 packets.
   Note that if NX_DISABLE_ICMP_RX_CHECKSUM is defined, this option is
   automatically defined. By default this option is not defined.*/
/*
#define NX_DISABLE_ICMPv6_RX_CHECKSUM
*/

/* Defined, this option disables checksum logic on received ICMPv4 or ICMPv6 packets.
   Note that if NX_DISABLE_ICMP_RX_CHECKSUM is defined, NX_DISABLE_ICMPv4_RX_CHECKSUM
   and NX_DISABLE_ICMPv6_RX_CHECKSUM are automatically defined. */
/*
#define NX_DISABLE_ICMP_RX_CHECKSUM
*/


/* Defiend, this option disables checksum logic on transmitted ICMPv4 packets.
   Note that if NX_DISABLE_ICMP_TX_CHECKSUM is defined, this option is
   automatically defined. By default this option is not defined.*/
/*
#define NX_DISABLE_ICMPv4_TX_CHECKSUM
*/

/* Defiend, this option disables checksum logic on transmitted ICMPv6 packets.
   Note that if NX_DISABLE_ICMP_TX_CHECKSUM is defined, this option is
   automatically defined. By default this option is not defined.*/
/*
#define NX_DISABLE_ICMPv6_TX_CHECKSUM
*/


/* Defined, this option disables checksum logic on transmitted ICMPv4 or ICMPv6 packets.
   Note that if NX_DISABLE_ICMP_TX_CHECKSUM is defined, NX_DISABLE_ICMPv4_TX_CHECKSUM
   and NX_DISABLE_ICMPv6_TX_CHECKSUM are automatically defined. */
/*
#define NX_DISABLE_ICMP_TX_CHECKSUM
*/


/* Defined, this option disables checksum logic on received IP packets. This is useful if the link-layer
   has reliable checksum or CRC logic.  */
/*
#define NX_DISABLE_IP_RX_CHECKSUM
*/


/* Defined, this option disables checksum logic on transmitted IP packets.  */
/*
#define NX_DISABLE_IP_TX_CHECKSUM
*/


/* Defined, this option disables checksum logic on received TCP packets.  */
/*
#define NX_DISABLE_TCP_RX_CHECKSUM
*/


/* Defined, this option disables checksum logic on transmitted TCP packets.  */
/*
#define NX_DISABLE_TCP_TX_CHECKSUM
*/

/* Defined, this option disables checksum logic on received UDP packets.  */

/*
#define NX_DISABLE_UDP_RX_CHECKSUM
*/


/* Defined, this option disables checksum logic on transmitted UDP packets.  Note that
   IPV6 requires the UDP checksum computed for outgoing packets.  If this option is
   defined, the IPv6 NetX Duo host must ensure the UDP checksum is computed elsewhere
   before the packet is transmitted. */

/*
#define NX_DISABLE_UDP_TX_CHECKSUM
*/


/* Defined, this option disables the reset processing during disconnect when the timeout value is
   specified as NX_NO_WAIT.  */
/*
#define NX_DISABLE_RESET_DISCONNECT
*/


/* Defined, this option disables the addition size checking on received packets.  */
/*
#define NX_DISABLE_RX_SIZE_CHECKING
*/


/* Defined, ARP information gathering is disabled.  */
/*
#define NX_DISABLE_ARP_INFO
*/


/* Defined, IP information gathering is disabled.  */
/*
#define NX_DISABLE_IP_INFO
*/


/* Defined, ICMP information gathering is disabled.  */
/*
#define NX_DISABLE_ICMP_INFO
*/

/* Defined, IGMP v2 support is disabled.  by default this opion is not set. */
/* By default NetX Duo target is IGMPv2-capable.  By uncommenting this option, NetX
   Duo target reverts back to IGMPv1 only. */

/* #define NX_DISABLE_IGMPV2 */


/* Defined, IGMP information gathering is disabled.  */
/*
#define NX_DISABLE_IGMP_INFO
*/


/* Defined, packet information gathering is disabled.  */
/*
#define NX_DISABLE_PACKET_INFO
*/


/* Defined, RARP information gathering is disabled.  */
/*
#define NX_DISABLE_RARP_INFO
*/


/* Defined, TCP information gathering is disabled.  */
/*
#define NX_DISABLE_TCP_INFO
*/


/* Defined, UDP information gathering is disabled.  */
/*
#define NX_DISABLE_UDP_INFO
*/

/* Defined, this option enables IP static routing feature.  By default IP static routing
   feature is not compiled in. */
/*
#define NX_ENABLE_IP_STATIC_ROUTING
*/


#ifdef NX_ENABLE_IP_STATIC_ROUTING
 /* #define NX_IP_ROUTING_TABLE_SIZE 8 */
#endif /* NX_ENABLE_IP_STATIC_ROUTING */


/* Defined, Minimum Path MTU Discovery feature is enabled.  */
/*
#define NX_ENABLE_IPV6_PATH_MTU_DISCOVERY
*/


/* Configurable options for Path MTU Discovery. */
#ifndef NX_DISABLE_IPV6_PATH_MTU_DISCOVERY
/*
   Define wait interval in timer ticks to reset the path MTU for a destination
   table entry after decreasing it in response to a packet too big error message.
   RFC 1981 Section 5.4 states the minimum time to wait is
   5 minutes and recommends 10 minutes.
*/
#ifndef NX_PATH_MTU_INCREASE_WAIT_INTERVAL
#define NX_PATH_MTU_INCREASE_WAIT_INTERVAL               60000
#endif

#endif /* NX_DISABLE_IPV6_PATH_MTU_DISCOVERY */

#ifdef FEATURE_NX_IPV6

#ifndef NX_IPV6_ROUTING_TABLE_SIZE
#define NX_IPV6_ROUTING_TABLE_SIZE 8
#endif /* NX_IPV6_ROUTING_TABLE_SIZE */


/* Define values used for Neighbor Discovery protocol.
   The default values are suggested by RFC2461, chapter 10. */


/* Define the maximum number of multicast Neighbor Solicitation packets
   NetX Duo sends for a packet destination needing physical mapping
   to the IP address. */
/*
   #define NX_MAX_MULTICAST_SOLICIT       3
*/

/* Define the maximum number of unicast Neighbor Solicitation packets
   NetX Duo sends for a cache entry whose reachable time has expired
   and gone "stale". */
/*
   #define NX_MAX_UNICAST_SOLICIT         3
*/

/* Define the length of time, in seconds, that a Neighbor Cache table entry
   remains in the reachable state before it becomes state. */
/*
   #define NX_REACHABLE_TIME              4
*/

/* Define the length of time, in milliseconds, between retransmitting
   Neighbor Solicitation (NS) packets. */
/*
   #define NX_RETRANS_TIMER               1000
*/

/* Define the length of time, in seconds, for a Neighbor Cache entry
   to remain in the Delay state.  This is the Delay first probe timer. */
/*
   #define NX_DELAY_FIRST_PROBE_TIME      4
*/

/* This defines specifies the maximum number of packets that can be queued while waiting for a
   Neighbor Discovery to resolve an IPv6 address. The default value is 4.  */
/*
#define NX_ND_MAX_QUEUE_DEPTH      4
*/

#endif /* FEATURE_NX_IPV6 */


/* Defined, the extended notify support is enabled.  This feature adds additional callback/notify services
   to NetX Duo API for notifying the application of socket events, such as TCP connection and disconnect
   completion.  These extended notify functions are mainly used by the BSD wrapper. The default is this
   feature is disabled.  */
/*
#define NX_ENABLE_EXTENDED_NOTIFY_SUPPORT
*/

/* Defined, NX_PACKET structure is padded for alignment purpose. The default is no padding. */
/*
#define NX_PACKET_HEADER_PAD
#define NX_PACKET_HEADER_PAD_SIZE 1
*/

/* If defined, the incoming SYN packet (connection request) is checked for a minimum acceptable
   MSS for the host to accept the connection. The default minimum should be based on the host
   application packet pool payload, socket transmit queue depth and relevant application specific parameters. */
/*
#define NX_TCP_ENALBE_MSS_CHECK
#define NX_TCP_MSS_MINIMUM              128
*/


/* If defined, the link driver is able to specify extra capability, such as checksum offloading features. */
/*
#define NX_ENABLE_INTERFACE_CAPABILITY
*/


/* If defined, the packet chain feature is removed. */
/*
#define NX_DISABLE_PACKET_CHAIN
*/

/* If defined, NetX Duo has a notify callback for the transmit TCP socket queue decreased from
   the maximum queue depth.
#define NX_TCP_QUEUE_DEPTH_UPDATE_NOTIFY_ENABLE
*/

#endif

