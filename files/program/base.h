#ifndef BASE_H
#define BASE_H

#include <stdio.h>
#include <math.h>

/* some definitions */
#define NULLP    (void *) 0
#define MAX(a,b) (((a)>(b)) ? (a) : (b))
#define MIN(a,b) (((a)<(b)) ? (a) : (b))
#define SQR(x)   ((x)*(x))
#define repeat   for(;;)

/* dims structure */
typedef struct DIMS_struct {
    int
      ldmat,    /* leading dimension */
      nrow,     /* number of rows */
      ncol;     /* number of columns */
} DIMS_struct, *DIMS;

/* declarations */
void scale_mat(double *, int, double, double *, int, int, int);
void print_mat(char *, double *, int, int, int);

#endif /* BASE_H */
