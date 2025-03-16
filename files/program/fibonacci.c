#include <stdio.h>

#define PHI       1.61803398875
#define repeat    for(;;)
#define MAX_TERMS 30

main() {
    double f_old = 0., f_last = 1., f_new, rel;
    int count = 0;

    repeat {
	f_new = f_last + f_old;
	count++;

	if (count >= MAX_TERMS)
	    break;
	
	f_last = f_old;
	f_old  = f_new;
	
	if (count > 1) {
	    rel = f_new / f_last;
	    printf("%2i, rel : %11.10g\n", count, rel);
	}
    }
    printf("\n");

    return;
}
