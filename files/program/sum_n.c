#include <stdio.h>

main()
{   /* suma de los primeros 'n' enteros */
    int i = 0, n, sum = 0;
    
    printf("Ingrese un numero: ");
    scanf("%i", &n);
    
    while (i < n) {
        i++;
        sum += i; 
    }
    
    printf("Suma = %i\n", sum);
    
    printf("Aunque es más fácil: %i\n", n * (n + 1) / 2);
    
    return;
}
