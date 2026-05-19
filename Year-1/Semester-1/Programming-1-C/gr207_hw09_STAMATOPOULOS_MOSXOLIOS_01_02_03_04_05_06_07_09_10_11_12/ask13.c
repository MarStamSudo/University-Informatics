#include <stdio.h>
void paragontiko( int a)
{
    int i, sum=1;
    for ( i=1; i<=a; i++ )
    {
        sum = sum*i;
    }
    if ( a==0 )
    {
        sum=1;
    }
    printf("%d ", sum);
}
int main(void)
{
    int x, y, i;
    do{
        printf("Bale a<b\n");
        scanf("%d%d", &x, &y);
    }while( x>y );
    for ( i=x; i<=y; i++ )
    {
        paragontiko(i);
    }





    return 0;
}