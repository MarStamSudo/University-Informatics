#include <stdio.h>
double sum( double a, double b, double c)
{
    double res;
    res=a+b+c;
    return res;
}
void stars( int c )
{
    int i;
    for ( i=0; i<c; i++ )
    {
        printf("*");
    }
    printf("\n");
}   
int main(void)
{
    double x, y, z, res;
    int c;
    printf("Give me 3 doubles to add them:");
    scanf("%lf%lf%lf", &x, &y, &z);

    printf("Give me the number of stars:");
    scanf("%d", &c);
    
    res=sum(x, y, z);

    stars(c);
    printf("%.2f", res);
    printf("\n");
    stars(c);




    return 0;
}