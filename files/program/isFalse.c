#include <stdio.h>

main()
{
    int isFalse = 0;
    
    if (isFalse) {
        /* esta instrucción no se ejecuta nunca */
        printf("Nunca se imprime este mensaje\n");
    }
    else
        printf("Se imprime este mensaje?\n");
    
    if (!isFalse)
        printf("isFalse = %i\n", isFalse);
    
    return;
}
