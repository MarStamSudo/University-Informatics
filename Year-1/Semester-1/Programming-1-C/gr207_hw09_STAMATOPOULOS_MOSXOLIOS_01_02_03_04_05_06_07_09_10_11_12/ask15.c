#include <stdio.h>
int f( int x )
{
    int fx;
    if ( x>0 )
    {
        fx = x + 2;
    }
    else
    {
        fx = -3*x + 7;
    }
    return fx;
}
int g( int x )
{
    int gx;
    if ( x>0 )
    {
        gx = x*x + 2;
    }
    else
    {
        gx = 7*x - 5;
    }
    return gx;
}
int main(void)
{
    int x, res;
    scanf("%d", &x);
    res = f(g(x));
    printf("%d", res);



    return 0;
}