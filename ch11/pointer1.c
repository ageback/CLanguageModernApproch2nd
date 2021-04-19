#include <stdio.h>

void decompose(double, long *, double *);

int main(void)
{
    long i;
    double d;
    decompose(3.1415926, &i, &d);
    printf("%ld\n", i);
    printf("%.7f", d);
}

void decompose(double x, long *int_part, double *frac_part)
{
    *int_part = (long)x;
    *frac_part = x - *int_part;
}