#include <stdio.h>

int main()
{
    float a = 12.34, b;
    int i, j = -50;
    
    /* algunas operaciones */
    i = a;      // conversión a entero
    printf("%f asignado a int: %i\n", a, i);

    a = j;      // conversion a flotante
    printf("%i asignado a float    : %f\n", j, a);

    a = j / 30; // división por entero
    printf("%i dividido por 30     : %f\n", j, a);
    
    b = j / 30.0;       // division por flotante
    printf("%i dividido por 30.0   : %f\n", j, b);
    
    b = (float) j / 30; // operador 'cast'
    printf("%i operación cast      : %f\n", j, b);
    
    return 0;
}
