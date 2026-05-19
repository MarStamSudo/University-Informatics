#include <stdio.h>
int main(void)
{
    int a[100], x, c1=0, c2=0, i, S=0;
    double MO;
    scanf("%d", &x);
    a[99] = x;
    for ( i=0; i<99; i++ )
    {
        scanf("%d", &x);
        a[i]=x;
    }
    for ( i=0; i<100; i++ )
    {
        if ( a[i]>a[99] )
        {
            c1++;
        }
        S=S+a[i];
    }
    MO = (float)S/100;
    for ( i=0; i<100; i++ )
    {
        if ( a[i]>MO )
        {
            c2++;
        }
    }
    printf("%d arithmoi einai megalyteroi apo to %d\n", c1, a[99]);
    printf("%d arithmoi einai megalyteroi apo ton meso oro %f", c2, MO);

    return 0;
}