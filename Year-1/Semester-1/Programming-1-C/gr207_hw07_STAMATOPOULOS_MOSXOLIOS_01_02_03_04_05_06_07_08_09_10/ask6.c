#include <stdio.h>
int main(void)
{
    double *p, i;
    p=&i;
    scanf("%lf", p);
    printf("%f", *p-(int)*p);
return 0;
}