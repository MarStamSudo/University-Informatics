#include <stdio.h>
double MO( double bath[], double a, double b);
int main(void)
{
    double bath[5], a, b, res;
    int i;
    for ( i=0; i<5; i++ )
    {
        scanf("%lf", &bath[i]);
    }
    do
    {
        scanf("%lf%lf", &a, &b);        
    }while(a>b);
    res = MO(bath,a,b);
    printf("%f", res);
    
    
    return 0;
}
double MO( double bath[], double a, double b)
{
    double MOS=0;
    int c=0;
    for ( int i=0; i<5; i++ )
    {
        if ( bath[i]>=a && bath[i]<=b )
        {
            MOS += bath[i];
            c++;
        }
    }
    if ( c!=0 )
    return MOS/c;
    else
    return 0;
}