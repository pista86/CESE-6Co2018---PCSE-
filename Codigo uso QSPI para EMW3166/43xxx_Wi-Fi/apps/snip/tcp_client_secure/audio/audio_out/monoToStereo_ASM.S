
	/**
	 * Directiva al ensablador que permite indicar que se encarga de buscar
	 * la instruccion mas apropiada entre thumb y thumb2
	 */
	.syntax unified

	/**
	 * .text permite indicar una seccion de codigo.
	 */
	.text

	/**
	 * .global permite definir un simbolo exportable,
	 * es decir que podemos verlo desde otros modulos (equivalente a extern).
     * Definimos la rutina como global para que sea visible desde otros modulos.
     */
	.global monoToStereo


#define audioIn 		r0
#define audioOUT		r1
#define audioInLength	r2
#define mode            r3

#define i 				r4
#define muestra1 		r5
#define muestra2 		r6
#define muestrah        r7
#define mask1           r8

	/**
	 * Indicamos que la siguiente subrutina debe ser ensamblada en modo thumb,
	 * entonces en las direcciones en el ultimo bit tendran el 1 para que se reconozcan como en modo thumb.
	 * Siempre hay que ponerla antes de la primer instruccion.
	 */
	.thumb_func


/**
 *	prototipo de la funcion en C
 *
 *	extern void monoToStereo (uint16_t * audioIn, uint16_t * audioOUT, uint32_t audioInLength, uint8_t mode);
 *
 *	En r0 se cargara vectorIn y en r1 se carga longitud. Luego el valor devuelto estara en r0 (si son 32 bits).
 *	Si el resultado que retorna es en 64 bits, usa r0 y r1.
*/

monoToStereo:
    push {r4-r7,lr}  		/* guardamos la direccion de retorno en la pila */


	LSR		audioInLength, audioInLength, 2 // longitud = longitud >> 2; longitud = longitud / 4
	cmp 	audioInLength, 0 // salto a fin si longitud=0
	beq 	fin
	ldr 	i, =0		// cargo 0 en i

	cmp     mode, 1 //
    beq     mode1

mode0:

	LDRD 	muestra1, muestra2, [audioIn, 4]!
    LSR     muestrah, muestra1, 16
    STRD    muestra1, muestrah, [audioOUT]
    LSR     muestrah, muestra2, 16
    STRD    muestra2, muestrah, [audioOUT, 4]!

	add 	i, 4
	cmp 	i, audioInLength
	blt 	mode0
    B       fin

mode1:

    LDR     mask1, =#0x0000FFFF
    LDRD    muestra1, muestra2, [audioIn, 4]!
    LSR     muestrah, muestra1, 16
    AND     muestrah, muestrah, mask1
    AND     muestra1, muestra1, mask1
    STRD    muestra1, muestrah, [audioOUT]
    LSR     muestrah, muestra2, 16
    AND     muestrah, muestrah, mask1
    AND     muestra2, muestra2, mask1
    STRD    muestra2, muestrah, [audioOUT, 4]!

    add     i, 4
    cmp     i, audioInLength
    blt     mode1



fin:
	pop 	{r4-r7,pc}   /* retorno */

	/* otras alternativas para el retorno */
	/* 1. mov pc,lr
	/  2. bx lr */
	/* pop {pc} */
