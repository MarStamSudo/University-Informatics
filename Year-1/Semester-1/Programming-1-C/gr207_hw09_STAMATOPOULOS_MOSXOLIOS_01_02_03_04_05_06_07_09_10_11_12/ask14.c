#include <stdio.h>
void farh( float a )
{
    float far;
    far= (a*9/5) + 32;
    printf("%.2fC = %.2fF\n", a, far);
}
int main(void)
{
    int x, y, i;
    do{
        printf("Bale a,b:\n");
        scanf("%d%d", &x, &y);
    }while( x>y );
    for ( i=x; i<=y; i++ )
    {
        farh(i);
    }




    return 0;
}