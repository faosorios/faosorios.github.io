#include <stdio.h>

/* declaracion de funciones */
void intercambiar_2_numeros(double *, double *);

main()
{   /* función 'principal' */
    double a = 0., b = 1.;

    printf("a = %g, b = %g\n", a, b);

    printf("\nIntercambiando...\n");
    intercambiar_2_numeros(&a, &b);
    
    printf("a = %g, b = %g\n", a, b);
    
    return;
}

void intercambiar_2_numeros(double *a, double *b)
{
    double x;
    
    /* a <-> b */
    x = *a;
    *a = *b;
    *b = x;

    return;
}
