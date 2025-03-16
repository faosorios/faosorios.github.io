#include <stdio.h>

int main()
{
    double x[3] = {10000001., 10000003., 10000002.};
    double a, b, d;
    int i, n = 3;

    /* inicialización */
    a = x[0];
    b = 0.0;

    /* bucle para cálculo de la media y varianza */
    for (i = 1; i < n; i++) {
      d  = (x[i] - a) / i;
      a += d;
      b += i * (i - 1) * d * d;
    }
    b /= (n - 1);
    
    /* Impresión de resultados */
    printf("Promedio         : %g\n", a);
    printf("Varianza muestral: %g\n", b);
    printf("Número de datos  : %i\n", n);
    
    return 0;
}

