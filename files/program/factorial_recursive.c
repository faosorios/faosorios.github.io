#include <stdio.h>

/* declaracion de funciones */
long int factorial(long int);

main()
{   /* función 'principal' */
    long int number, ans;

    printf("Ingrese un numero: ");
    scanf("%li", &number);
    
    ans = factorial(number);
    
    printf("Factorial = %li\n", ans);
    
    return;
}

long int factorial(long int n)
{   /* calcula el factorial de 'n'. versión recursiva */
    long int ans;
    
    if (n == 0)
        ans = 1;
    else
        ans = n * factorial(n - 1);
    
    return ans;
}
