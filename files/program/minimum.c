#include <stdio.h>

/* declaracion de funciones */
double minimo(double a[], int n);

main()
{   /* función 'principal' */
    double  a[5] = {157., -8., -37., 26., 10.},
            b[7] = {12.3, 25.1, 31., 5.5, 3.2, 8., 9.9};

    printf("minimo de a: %g\n", minimo(a, 5));
    printf("minimo de b: %g\n", minimo(b, 7));
    
    return;
}

double minimo(double a[], int n)
{
    double ans;
    int i;
    
    ans = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < ans)
            ans = a[i];
    }
    
    return ans;
}
