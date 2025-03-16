#include <stdio.h>

main()
{   /* calcula el valor absoluto de un numero real */
    double number;

    printf("Ingrese un numero: ");
    scanf("%lf", &number);
    
    if (number < 0.0)
        number = -number;
    
    printf("El valor absoluto es %g\n", number);
    
    return;
}
