#include <stdio.h>

int main()
{
    double a[3] = {55., 86., 16.}, aux;
    int i, j, k, n = 3;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] >= a[j+1]) {
                aux = a[j];
                a[j] = a[j+1];
                a[j+1] = aux;
            }
        }
    }
    
    for (k = 0; k < n; k++)
        printf(" %g", a[k]);
    printf("\n");
    
    return 0;
}
