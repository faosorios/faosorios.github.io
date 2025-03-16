#include <stdio.h>

main()
{   /* axpy: y <- a * x + y */
    int i, n = 10;
    double x[10] = {0.0}, y[15] = {0.0}, a = -1.0;

    /* inicialización */
    x[0] = 0.0; x[1] = 1.0;
    for (i = 2; i < n; i++) {
        x[i] = x[i-2] + x[i-1];
        y[i] = (double) i;
    }
    
    /* retorno 'rápido' */
    if (a == 0.0) return;

    /* axpy */
    for (i = 0; i < n; i++)
        y[i] += a * x[i];
    
    /* impresión */
    printf("y: ");
    for (i = 0; i < n; i++)
        printf(" %6.4g", y[i]);
    printf("\n");
    
    return;
}
