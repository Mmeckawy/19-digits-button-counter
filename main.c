#include <stdint.h>
#include "stdbool.h"
#include <driverlib/systick.h>
#include "DIO.h"
#include "bitwise.h"
#include "digits.h"
#include "driverlib/sysctl.h"

 void main()
{
  DIO_Init(portA, 0XE0, 0X0, 0XE0, 0X0);
  DIO_Init(portB,0x17,0x0,0x17,0x0);
  DIO_Init(portE,0x31,0x0,0x31,0x0);
  DIO_Init(portF,0x0,0x11,0x11,0x11);

  while(1)
  {
    int count;
    if(DIO_ReadPin(portF,0)==0 && count < 20)
    {
      count++;
    }
    else if(DIO_ReadPin(portF,4)==0)
    {
      DIO_WritePin(portE,0,0);
      DIO_WritePin(portB,2,0);
      view_digit(0);
    }
    
    switch (count)
        {
        case 0:
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,0);
          view_digit(0);

        case 1:
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(0);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(1);
          delay(1000);
          break;
          
        case 2:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(0);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(2);
          delay(1000);
          break;
          
        case 3:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(0);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(3);
          delay(1000);
          break;
          
        case 4:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(0);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(4);
          delay(1000);
          break;
          
        case 5:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(0);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(5);
          delay(1000);
          break;
          
        case 6:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(0);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(6);
          delay(1000);
          break;
          
        case 7:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(0);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(7);
          delay(1000);
          break;
          
        case 8:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(0);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(8);
          delay(1000);
          break;  
          
        case 9:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(0);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(9);
          delay(1000);
          break;
          
        case 10:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(1);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(0);
          delay(1000);
          break;
          
        case 11:
          view_digit(-1);
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,0);
          view_digit(1);
          break;
          
        case 12:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(1);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(2);
          delay(1000);
          break;  
          
        case 13:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(1);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(3);
          delay(1000);
          break;
          
        case 14:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(1);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(4);
          delay(1000);
          break; 
          
        case 15:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(1);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(5);
          delay(1000);
          break;  
          
        case 16:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(1);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(6);
          delay(1000);
          break;  
          
        case 17:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(1);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(7);
          delay(1000);
          break;  
          
        case 18:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(1);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(8);
          delay(1000);
          break; 
          
        case 19:
          view_digit(-1);
          DIO_WritePin(portE,0,1);
          DIO_WritePin(portB,2,0);
          view_digit(1);
          delay(1000);
          
          DIO_WritePin(portE,0,0);
          DIO_WritePin(portB,2,1);
          view_digit(9);
          delay(1000);
          break;  
        }
      delay(200000);
    }
 }
