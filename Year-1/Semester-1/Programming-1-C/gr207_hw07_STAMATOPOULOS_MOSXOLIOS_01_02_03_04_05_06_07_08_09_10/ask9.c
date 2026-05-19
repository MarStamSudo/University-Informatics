#include <stdio.h>
int main(void)
{
    int *p1, *p2, x, sum;
    p1=&x;
    p2=&sum;
    *p2=0;
    for ( *p1=2; *p1<=100; *p1=*p1+2 )
    {
        *p2= *p2+*p1;
    }
    printf("%d", *p2); 
    return 0;
}   