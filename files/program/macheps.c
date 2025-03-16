#include <stdio.h>

/* variables globales */
int iter = 1;

/* declaracion de funciones */
double macheps();

int main()
{
    double eps;
    
    eps = macheps();
    
    printf("epsilon = %g\titer = %d\n", eps, iter);
    
    return 0;
}

double macheps()
{   /* calcula el 'epsilon' de maquina */
    double one = 1., eps, tol;
    
    eps = one;
    do {
        eps /= 2.;
        tol = eps + one;
        iter++;
    } while (tol > one);
    return eps;
}
