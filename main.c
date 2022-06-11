/******************************************************************************
Alvarez Pedro Jose Nicolas
*******************************************************************************/
#include <stdio.h>
#include <ctype.h>


int main ()
{
  
  char caracter;
 puts ("Ingrese cadena de caracteres y presione enter:");
   while ((caracter=getchar ()) != EOF )
   { 
   
  
 	 if (islower(caracter) && !isdigit(caracter)  ) 
      { 
	  	putchar (toupper(caracter));
      }
     else if (!isdigit(caracter) )
	 {
	 putchar(tolower(caracter));
	 }
  } 
  return 0;
}
