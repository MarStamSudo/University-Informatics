#include <stdio.h>
int main(void)
{
    int a[4][4], i,j, x, up=1, low=1;
    for ( i=0; i<4; i++ )
    {
        for ( j=0; j<4; j++ )
        {
            scanf("%d", &x);
            a[i][j] = x;
        }
    }
    for ( i=0; i<4; i++ )
    {
        for ( j=0; j<4; j++ )
        {
            if ( i>j && a[i][j]!= 0)
            {
                up=0;
            }
            if ( i<j && a[i][j]!=0 )
            {
                low=0;
            }
        }
    }
        if ( up==1 && low==1 )
    {
        printf("O pinakas einai kai ta duo");
    }
    else if ( up==1 )
    {
        printf("O pinakas einai anw trigonikos");
    }
    else if ( low==1 )
    {
        printf("O pinakas einai katw trigonikos");
    }

    return 0;
}