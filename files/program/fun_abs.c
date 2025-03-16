#include <stdio.h>

/* declaracion de funciones */
double fun_abs(double);

main()
{   /* función 'principal' */
    double number;

    printf("Ingrese un numero: ");
    scanf("%lf", &number);
    
    number = fun_abs(number);
    
    printf("El valor absoluto es %g\n", number);
    
    return;
}

double fun_abs(double x)
{   /* calcula el valor absoluto de un numero real */
    if (x < 0.0)
        x = -x;
    
    return x;
}
