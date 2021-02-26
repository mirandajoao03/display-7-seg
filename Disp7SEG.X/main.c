/*
 * File:   main.c
 * Author: 20185561
 *
 * Created on 24 de Fevereiro de 2021, 14:25
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "display7seg.h"

void main(void) 
{
    int cont = 0;
    char estado = 0;
    display7seg_init();
    botoes();
    
    while ( 1 )
    {
        switch ( estado )
        {
            case 0:
                    if( botao1() == 1 )
                        estado = 1;
                    if( botao0() == 1)
                        estado = 3;
                    break;
            case 1:
                    if ( botao1() == 0 )
                        estado = 2;
                    break;
            case 2:
                    ++cont;
                    estado = 0;
                    break;
            case 3: 
                if ( botao0() == 0 )
                    estado = 4;
                    break;
            case 4:
                    --cont;
                    estado = 0;
                    break;
        } 
        display7seg( cont );

        if ( cont >= 10 )
            cont = 0;

        if ( cont < 0 )
            cont = 9;
        } 
                    

}
    

