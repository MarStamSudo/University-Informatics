#include <stdio.h>
int main(void)
{
    int a[100], x, i, c=0, max=-1;
    printf("Dwse arithmo: ");
    for ( i=0; i<100; i++ )
    {
        scanf("%d", &x);
        a[i] = x;
    } 
    for ( i=1; i<100; i++ )
    {
        if ( a[i]%a[i-1] == 0 )
        {
            max = a[i];
            c=1;
        }
    }
    if ( c==1 )
    {
        printf("To max einai to %d", max);
    }
    else
    {
        printf("Den uparxei kanenas arithmos.");
    }






    return 0;
}