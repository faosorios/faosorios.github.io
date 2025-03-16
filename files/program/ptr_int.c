#include <stdio.h>

main()
{
    int n = 10;
    int *ptr = &n;

    printf("%i\n", n);    /* imprime el valor de 'n' */

    printf("%p\n", &n);   /* obtiene dirección de 'n' */
    printf("%p\n", ptr);  /* imprime contenido de 'ptr' */
    
    printf("%p\n", &ptr); /* obtiene dirección de 'ptr' */
    
    return;
}
