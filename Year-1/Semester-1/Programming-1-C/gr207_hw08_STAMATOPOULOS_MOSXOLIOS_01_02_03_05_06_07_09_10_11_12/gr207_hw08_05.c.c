#include <stdio.h>
int main(void)
{
    int *arr[3], i, j, k, m, sum;
    arr[0]=&j;
    arr[1]=&k;
    arr[2]=&m;
    sum =0;
    scanf("%d", arr[0]);
    scanf("%d", arr[1]);
    scanf("%d", arr[2]);
    for ( i=0; i<3; i++ )
    {
        if ( *arr[i]%2==0 )
        {
            sum=sum+*arr[i];
        }
    }
    printf("%d", sum);





    return 0;
}