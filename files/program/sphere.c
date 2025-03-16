#include <stdio.h>

int main()
{
    double r = 1.0, area;
    const double PI = 3.1415926536;
    
    /* calculo del area de una esfera de radio 'r' */
    area = 4.0 * PI * r * r;
    
    printf("el area de una esfera de radio %f es: %f\n", r, area); 
    
    return 0;
}
