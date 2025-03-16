#include <stdio.h>
#include <math.h>

main() {
    /* evalua la función exponencial usando una expansión en series */
    double p = 0., x, term, sum, tol = 1.e-8;
    int num_terms, max_terms = 200;
    
    /* datos iniciales */
    x    = -1.;
    term = 1.;
    sum  = 1.;
    num_terms = 1;
    
    do {
	p++;
	
	term *= x / p;
	sum  += term;
	
	num_terms++;
	
	if (num_terms >= max_terms)
	    break; /* convergencia no es alcanzada */
    } while (fabs(term) > tol);
    
    /* impresión de resultados */
    printf("Solucion : %11.10g\n", sum);
    printf("Terminos : %i\n", num_terms);
    
    return;
}
