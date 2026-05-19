#include <stdio.h>
int main(void)
{
    double x, *j, **jj, y, *k, **kk, sum=0;
    j=&x;
    jj=&j;
    k=&y;
    kk=&k;
    scanf("%lf", j);
    scanf("%lf", k);
    printf("%.3f", sum = **jj + **kk);
    


    return 0;
}