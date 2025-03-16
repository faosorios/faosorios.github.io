#include <stdio.h>

main()
{   /* calcula el factorial de 'n' */
    int i, n;
    double prod;
    
    printf("Ingrese un numero: ");
    scanf("%i", &n);
    
    prod = 1.;
    for (i = 1; i <= n; i++)
        prod *= i;
    
    printf("Factorial = %g\n", prod);
    
    return;
}
