#include <stdio.h>
#define k 10
int* check( int a[], int *ptr);
int main(void)
{
    int a[k], i, res;
    for ( i=0; i<k; i++ )
    {
        scanf("%d", &a[i]);
    }
    check( a, &res );
    printf("To stoixeio me tis perissoteres emfaniseis einai: %d", res);





    return 0;
}
int* check( int a[], int *ptr)
{
    int i, max=0;
    for ( i=0; i<k; i++ )
    {
        int c=0;
        for ( int j=0; j<k; j++ )
        {
            if ( a[i]==a[j] )
            {
                c++;
            }
            if ( c>max )
            {
                max = c;
                *ptr=a[i];
            }
        }
    }
    if ( max==0 )
    {
        return NULL;
    }
}