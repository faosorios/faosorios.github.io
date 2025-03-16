#include <stdio.h>

main()
{
    double x = 1.2;
    double *ptr, *ptr_add, *ptr_sub;

    ptr = &x;
    ptr_add = ptr + 3;
    ptr_sub = ptr_add - 3;

    printf("x      : %g\n", x);
    printf("ptr    : %p\n", ptr);
    printf("ptr_add: %p\n", ptr_add);
    printf("ptr_sub: %p\n", ptr_sub);
    printf("\n");
    
    if (ptr == ptr_sub)
        printf("ptr y ptr_sub son iguales a: %p\n", ptr);
    
    return;
}
