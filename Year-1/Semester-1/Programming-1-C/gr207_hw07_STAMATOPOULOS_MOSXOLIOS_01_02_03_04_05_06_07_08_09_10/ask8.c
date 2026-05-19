#include <stdio.h>
int main(void)
{
    int *p1, *p2, *p3, i, j, k;
    p1=&i;
    p2=&j;
    p3=&k;
    do
    {
        scanf("%d", p1);
        scanf("%d", p2);
        scanf("%d", p3);
    }while(*p1!=*p2+1 || *p2!=*p3+1);
    printf("%d%d%d", *p1, *p2, *p3);
    return 0;
}