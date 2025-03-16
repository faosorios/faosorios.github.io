#include "base.h"

main()
{
    double a[9] = {2., 0., 0., 1., 5., 0., 7., 9., 8.}, alpha = 0.5,
           b[9] = {0., 0., 0., 0., 0., 0., 0., 0., 0.};

    /* imprime el contenido de 'a' */
    print_mat("a:", a, 3, 3, 3);
    
    /* b <- alpha * a */
    scale_mat(b, 3, alpha, a, 3, 3, 3);
    
    /* imprime el contenido de 'b' */
    print_mat("b:", b, 3, 3, 3);
    
    return;
}

void
scale_mat(double *y, int ldy, double a, double *x, int ldx, int nrow, int ncol)
{   /* y[,] <- a * x */ 
    int i, j;
    
    for (j = 0; j < ncol; j++) {
        for (i = 0; i < nrow; i++) 
            y[i] = a * x[i];
        x += ldx; y += ldy;
    }
}

void
print_mat(char *msg, double *x, int ldx, int nrow, int ncol )
{   /* print matrix and message */
    int i, j;
    
    printf("%s\n", msg);
    for (i = 0; i < nrow; i++) {
        for (j = 0; j < ncol; j++) {
            printf(" %6.4g", x[i + j *ldx]);
        }
        printf("\n");
    }
    printf("\n");
}
