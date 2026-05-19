#include <stdio.h>
int main(void)
{
    int a[300][500], x, i, j, k, c=0;
    for ( i=0; i<300; i++ )
    {    
        for ( j=0; j<500; j++ )
        {
             scanf("%d", &x);
             a[i][j] = x;
        }
    }
    for ( j=0; j<500; j++ )
    {
        c=0;
        for ( i=0; i<300; i++ )
        {
            for ( k= i+1; k<300; k++ )
            {
                if ( a[i][j]==a[k][j] )
                {
                    c=1;
                    break;
                }  
            }
            if ( c==1 )
            {
                break;
            }
        }
        if ( c==0 )
        {
            printf("H %d stili exei diaforetika stoixeia", j);
        }
    }
    return 0;
}