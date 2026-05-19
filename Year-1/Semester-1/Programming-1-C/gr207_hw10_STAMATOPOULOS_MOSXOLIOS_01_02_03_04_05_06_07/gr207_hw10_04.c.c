#include <stdio.h>
#include <math.h>
 double poly(const double a[], double x, int n);
int main(void)
{
        int n, i;
        double result, x, a[101];
        do{
        scanf("%d%lf", &n, &x);
        }while ( n<0 || n>100 );
        for ( i=0; i<=n; i++ )
        {
            scanf("%lf", &a[i]);
        }
        result = poly( a, x, n);
        printf("%f", result);




    return 0;
}
 
double poly(const double a[], double x, int n)
 {
    double res = 0;
    for ( int i=0; i<=n; i++ )
    {
    res += a[i]* pow(x , i);
    }
    return res;
 }