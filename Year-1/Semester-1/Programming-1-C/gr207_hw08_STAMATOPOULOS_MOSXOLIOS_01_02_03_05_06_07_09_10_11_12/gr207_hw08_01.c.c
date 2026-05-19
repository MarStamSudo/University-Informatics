#include <stdio.h>
int main(void)
{
    int a[100], i, j;
    for ( i=0; i<100; i++ )
    {
        scanf("%d", a+i);
    }
    for ( i=0; i<100; i++ )
    {
        for ( j=i+1; j<100; j++ )
        {
            if ( *(a+i)== *(a+j) )
            {
                *(a+j)=-99;
                break;
            }
        }
    }
    for ( i=0; i<100; i++ )
    {
        printf("%d", *(a+i));
    }
    



    return 0;
}