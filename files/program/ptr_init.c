#include <stdio.h>

main()
{
    int n = 10;
    int *ptr = NULL;

    printf("%i\n", n);
    printf("%p\n", ptr);
    printf("\n");

    ptr  = &n; /* asigna la dirección de 'n' a 'ptr' */
    *ptr = 50; /* asigna un valor a la dirección de memoria */

    printf("%i\n", n);
    printf("%p\n", ptr);
    
    return;
}
