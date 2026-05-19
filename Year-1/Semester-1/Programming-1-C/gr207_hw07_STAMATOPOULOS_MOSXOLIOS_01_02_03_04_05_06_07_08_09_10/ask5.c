#include <stdio.h>
int main(void)
{
    double *p1, *p2, i, j;
    p1 = &i;
    p2 = &j;
    scanf("%lf%lf", p1, p2);
    if ( *p1+*p2>=0 )
    {
        printf("%lf", *p1+*p2);
    }
    else
    {
        printf("%.2lf", -(*p1+*p2));
    }
    return 0;
}