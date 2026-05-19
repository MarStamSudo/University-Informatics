#include <stdio.h>
double *max( double a, double b, double *ptr );
int main(void)
{
    double a, b, res, *ptr;
    scanf("%lf%lf", &a, &b);
    do{
        ptr = max(a,b, &res);
        if ( ptr==NULL )
        {
            printf("Oi duo arithmoi einai isoi.");
        }
        else
        {
            printf("O arithmos %.2f einai megaliteros.\n", *ptr);
        }
        scanf("%lf%lf", &a, &b);
    }while ( a>=0 && b>=0 );
    return 0;
}
double *max( double a, double b, double *ptr )
{
    if ( a==b )
    {
        return NULL;
    }
    else if ( a>b )
    {
        *ptr=a;
    }
    else
    {
        *ptr=b;
    }
    return ptr;
}