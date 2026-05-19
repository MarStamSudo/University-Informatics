#include <stdio.h>
#define k 100
void c(double a[], double b[], int n, int *ptr);
int main(void)
{
    double a[k], b[k];
    int i,n, res;
    for ( i=0; i<k; i++ )
    {
        scanf("%lf", &a[i]);
    }
    for ( i=0; i<k; i++ )
    {
        scanf("%lf", &b[i]);
    }
    printf("Grapse arithmo stoixeiwn pou tha sigkrithoun");
    scanf("%d", &n);
    c(a,b,n, &res);
    printf("%d", res); 



    return 0;
}
void c(double a[], double b[], int n, int *ptr)
{
    int i, count=0;
    for ( i=0; i<n; i++ )
    {
        if ( a[i]==b[i] )
        {
            count++;
        }
    }
    if ( count == n )
    {
        *ptr=1;
    }
    else
    {
        *ptr=0;
    }
    return;
}