#include <stdio.h>

main()
{   /* implementa la función 'signo' */
    double number, sign;

    printf("Ingrese un numero: ");
    scanf("%lf", &number);
    
    if (number < 0.0)
        sign = -1.0;
    else if (number = 0.0)
        sign = .0;
    else
        sign = 1.;
    
    printf("Signo = %g\n", sign);
    
    return;
}
