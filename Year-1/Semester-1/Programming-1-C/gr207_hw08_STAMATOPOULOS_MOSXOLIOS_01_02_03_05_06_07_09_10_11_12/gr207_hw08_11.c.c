#include <stdio.h>
#define k 5
#define l 7 
int main(void)
{
    int arr[k][l], i, j;
    for ( i=0; i<k; i++ )
    {
        for ( j=0; j<l; j++ )
        {
            scanf("%d", *(arr+i)+j);
        }
    }
    for ( i=0; i<k; i++ )
    {
        for ( j=0; j<l; j++ )
        {
            printf("%d ", *(*(arr+i)+j));
        }
        printf("\n");
    }
    





    return 0;
}