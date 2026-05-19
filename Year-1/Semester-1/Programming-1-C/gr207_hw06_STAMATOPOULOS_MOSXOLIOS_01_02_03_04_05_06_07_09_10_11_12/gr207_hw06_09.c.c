#include <stdio.h>
int main(void)
{
    int a[1000], x, i, c[11];
    
    for ( i=0; i<11; i++ )
    {
        c[i]=0;
    }
    for ( i=0; i<1000; i++ )
    {
        do
        {
            scanf("%d", &x);
        }while ( x<0 || x>10 );
        a[i]=x;
    }
    for ( i=0; i<1000; i++ )
    {
        if ( a[i]==1 )
        {
            c[1]=c[1]+1;
        }
        if ( a[i]==2 )
        {
            c[2]=c[2]+1;
        }
        if ( a[i]==3 )
        {
            c[3]=c[3]+1;
        }
        if ( a[i]==4 )
        {
            c[4]=c[4]+1;
        }
        if ( a[i]==5 )
        {
            c[5]=c[5]+1;
        }
        if ( a[i]==6 )
        {
            c[6]=c[6]+1;
        }
        if ( a[i]==7 )
        {
            c[7]=c[7]+1;
        }
        if ( a[i]==8 )
        {
            c[8]=c[8]+1;
        }
        if ( a[i]==9 )
        {
            c[9]=c[9]+1;
        }
        if ( a[i]==10 )
        {
            c[10]=c[10]+1;
        }
    }
    for ( i=1; i<11; i++ )
    {
        printf("%d", c[i]);
    }




    return 0;   
}