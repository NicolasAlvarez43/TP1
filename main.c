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
     
     if (islower(caracter)) 
      {
         caracter =toupper(caracter);
      }
     else {caracter =tolower(caracter);}
      if(isdigit(caracter))
      {
      caracter= 0;
      }

   putchar(caracter);
  
  } 
  return 0;
}