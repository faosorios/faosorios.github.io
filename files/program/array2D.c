#include <stdio.h>

main()
{
    int i, j, k = 0, nrow = 4, ncol = 5;
    double a[4][5] = {0.0}, accum = 0.;

    for (i = 0; i < nrow; i++) {
        for (j = 0; j < ncol; j++) {
            k++;
            a[i][j] = k;
            accum += a[i][j];
        }
    }
    
    /* imprime el contenido de 'a' */
    for (i = 0; i < nrow; i++) {
        for (j = 0; j < ncol; j++)
            printf(" %6.4g", a[i][j]);
        printf("\n");
    }
    printf("\n");
    
    printf("La suma de todos los elementos de 'a' es %g\n", accum);
    
    return;
}
