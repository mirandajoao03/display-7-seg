/*
 * File:   display7seg.c
 * Author: 20185561
 *
 * Created on 24 de Fevereiro de 2021, 15:48
 */


#include <xc.h>

void display7seg_init ( void )
{
    TRISD = 0x00;
    PORTD = 0x00;
}

void display7seg ( int c )
{
    PORTD = c;
}
