#include <stdio.h>

/* declaracion de funciones */
void axpy(double *, double, double *, int);
void print_mat(char *, double *, int, int, int);

main()
{
    int i, n = 10;
    double x[10] = {0.0}, y[15] = {0.0}, a = -1.0;

    /* inicialización */
    x[0] = 0.0; x[1] = 1.0;
    for (i = 2; i < n; i++) {
        x[i] = x[i-2] + x[i-1];
        y[i] = (double) i;
    }
    
    /* llamada a 'print_mat' */
    print_mat("x:", x, 1, 1, 10);
    print_mat("y:", y, 1, 1, 10);
    
    /* llamada a 'axpy' */
    axpy(y, a, x, n);

    /* llamada a 'print_mat' */
    print_mat("x:", x, 1, 1, 10);
    print_mat("y:", y, 1, 1, 10);
    
    return;
}

void
axpy(double *y, double a, double *x, int n)
{   /* y <- a * x + y */
    int i;
    
    if (n <= 0) return;

    if (a == 0.0) return;
    
    for (i = 0; i < n; i++)
        *y++ += a * *x++;
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
