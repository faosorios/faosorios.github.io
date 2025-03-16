#include <stdio.h>

typedef struct { /* define estructura 'complejos' */
   double real;
   double imag;
} complejo;

complejo sumar_complejo(complejo x, complejo y);

int main() {
   complejo x, y, z; /* declara variables 'x', 'y' y 'z' como complejos */
   
   /* asigna valores a 'x' e 'y' */
   x = (complejo) {.real = 1.5, .imag = 0.8};
   y = (complejo) {.real = 1.0, .imag = 1.2};
 
   printf("x: %g+i%g\n", x.real, x.imag);
   printf("y: %g+i%g\n", y.real, y.imag);
   
   z = sumar_complejo(x, y);
   
   printf("z: %g+i%g\n", z.real, z.imag);
   
   return 0;
}

complejo sumar_complejo(complejo x, complejo y)
{  /* suma dos números complejos */
   complejo z;
   
   z.real = x.real + y.real;
   z.imag = x.imag + y.imag;
   
   return z;
}
