#include <stdio.h>
#include <math.h>

main() {
    double a, b, c;
    double d, r1, r2, real, imag;
    
    printf("Ingresar coeficientes a, b y c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    
    d = b * b - 4. * a * c;
    
    printf("Discriminante: %g\n", d);
    
    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2. * a);
        r2 = (-b - sqrt(d)) / (2. * a);
        printf("Raices son: %g, %g", r1, r2);
    } else if (d == 0) {
        r1 = r2 = -b / (2. * a);
        printf("Raices son: %g, %g", r1, r2);
    } else {
        real = -b / (2. * a);
        imag = sqrt(-d) / (2. * a);
        printf("Raices son: %g+%gi, %g-%gi", real, imag, real, imag);
    }
    printf("\n");
    
    return;
}
