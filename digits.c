#include "digits.h"
#include "DIO.h"

void delay(int d)
{
  while(d--);
}

void write_pins(int a, int b, int c, int d, int e, int f, int g, int DP)
{
  DIO_WritePin(portA,7,a);
  DIO_WritePin(portB,4,b);
  DIO_WritePin(portA,6,c);
  DIO_WritePin(portE,5,d);
  DIO_WritePin(portE,4,e);
  DIO_WritePin(portB,0,f);
  DIO_WritePin(portB,1,g);
  DIO_WritePin(portA,5,DP);
}
  
void view_digit(int digit){
  switch(digit)
  {
  case -1:
    write_pins(0,0,0,0,0,0,0,0);
    break;
  case 0: 
    write_pins(1,1,1,1,1,1,0,0);
    break;
    
  case 1:
    write_pins(0,1,1,0,0,0,0,0);
    break;
    
  case 2:
    write_pins(1,1,0,1,1,0,1,0);
    break;
    
  case 3:
    write_pins(1,1,1,1,0,0,1,0);
    break;
    
  case 4:
    write_pins(0,1,1,0,0,1,1,0);
    break;
    
  case 5:
    write_pins(1,0,1,1,0,1,1,0);
    break;
    
  case 6:
    write_pins(1,0,1,1,1,1,1,0);
    break;
    
  case 7:  
    write_pins(1,1,1,0,0,0,0,0);
    break;
    
  case 8:
    write_pins(1,1,1,1,1,1,1,0);
    break;
    
  case 9:
    write_pins(1,1,1,1,0,1,1,0);    
    break;
  }
}