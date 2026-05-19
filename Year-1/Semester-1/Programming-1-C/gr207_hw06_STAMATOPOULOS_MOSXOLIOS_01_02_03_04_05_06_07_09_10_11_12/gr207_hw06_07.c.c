#include <stdio.h>
int main(void)
{
    int a[100], x, i, temp;
    for ( i=0; i<100; i++ )
    {
        printf("Dwse arithmo: ");
        scanf("%d", &x);
        a[i] = x;
    }
    temp = a[99];
    for ( i=99; i>0; i-- )
    {
        a[i] = a[i-1];
    }
    a[0] = temp;
    printf("\n");
    for ( i=0; i<100; i++ )
    {
        printf("%d ", a[i] );
    }



    return 0;
}