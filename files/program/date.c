#include <stdio.h>

typedef struct { /* define estructura 'fecha' */
   int dia, mes, ano;
} fecha;

int main() {
   fecha hoy; /* declara variable 'hoy' como 'fecha' */
   
   /* asigna valores a miembros de 'hoy' */
   hoy.dia = 13;
   hoy.mes = 4;
   hoy.ano = 2015;
 
   printf("La fecha de hoy es: %i/%i/%i\n", hoy.dia, hoy.mes, hoy.ano);
   
   return 0;
}
