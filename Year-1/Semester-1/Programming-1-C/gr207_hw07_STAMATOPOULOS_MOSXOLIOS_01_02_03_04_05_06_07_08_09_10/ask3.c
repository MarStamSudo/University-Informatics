#include <stdio.h>
int main(void)
{
    int a[10][20], i, j, S, x;
    for ( i=0; i<9; i++ )
    {
        for (j=0; j<20; j++ )
        {
            do{
            scanf("%d", &a[i][j]);
            }while ( a[i][j]<0 || a[i][j]>10 );
        }
    }
    for ( j=0; j<20; j++ )
    {
        S = 0;
        for ( i=0; i<9; i++ )
        {
            S = S + a[i][j]; 
        }
        x = 100 - S;
        a[9][j] = x;
    }
    int mins=101, min[20];
    for ( j=0; j<20; j++ )
    {
        for ( i=0; i<10; i++ )
        {
            if ( a[i][j]<mins )
            {
                min[j] = a[i][j];
            }
        }
    }
    for ( i=0; i<20; i++ )
    {
        printf("%d", min[i]);
    }
    return 0;
}