#include <stdio.h>
#define k 5
int main(void)
{
    int arr[k][k], i, j, max1, sum1, max2, sum2;
    for ( i=0; i<k; i++ )
    {
        for ( j=0; j<k; j++ )
        {
            scanf("%d", *(arr+i)+j);
        }
    }
    max1=0;
    for ( i=0; i<k; i++ )
    {
        sum1=0;
        for ( j=0; j<k; j++ )
        {
            sum1 += *(*(arr+i)+j);
        }
        if ( j==0 || sum1>max1 )
        {
            max1=sum1;
        }
    }
    max2=0;
    for ( j=0; j<k; j++ )
    {
        sum2=0;
        for ( i=0; i<k; i++ )
        {
            sum2 += *(*(arr+i)+j);
        }
        if ( i==0 || sum2>max2 )
        {
            max2=sum2;
        }
    }
    printf("%d", max1);
    printf("%d", max2);

    return 0;
}