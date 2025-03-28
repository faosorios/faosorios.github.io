#include <stdio.h>
#include <math.h>

main()
{   /* Cálculo iterativo de sqrt(2) */
    double x_old, x_new, rel, eps = 1.e-6;
    int iter, maxIter = 100;
    
    /* valor inicial */
    x_old = 1.;

    for (iter = 0; iter < maxIter; iter++) {
	/* cálculo del nuevo valor y error relativo */
	x_new = 0.5 * x_old + 1. / x_old;
	rel = fabs((x_new - x_old) / x_old);
	
	if (rel < eps)
	    break; /* finalización exitosa */
	    
	/* actualización */
	x_old = x_new;
    }
    
    /* impresión de resultados */
    printf("Solucion   : %12.10g\n", x_new);
    printf("Error      : %12.10g\n", rel);
    printf("Iteraciones: %i\n", iter);
    
    return;
}
