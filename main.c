/******************************************************************************
Alvarez Pedro Jose Nicolas
*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

int main ()
{
  
  char caracter;
  int  aux;
 puts ("Ingrese cadena de caracteres y presione enter:");
   while ((caracter=getchar ()) != EOF )
   { 
   
   	if (isdigit(caracter))
	   {
   		aux = 1;
	   } else { aux=0;
	   }
 	 if (islower(caracter) && aux==0  ) 
      { 
	  	putchar (toupper(caracter));
      }
     else if (aux==0)
	 {
	 putchar(tolower(caracter));
	 }
  } 
  return 0;
}
