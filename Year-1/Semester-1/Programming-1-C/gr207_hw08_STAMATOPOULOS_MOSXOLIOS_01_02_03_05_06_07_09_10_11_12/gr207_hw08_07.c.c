#include <stdio.h>
int main(void)
{
    int x, *j, **jj, y, *k, **kk, temp;
    j=&x;
    jj=&j;
    k=&y;
    kk=&k;
    scanf("%d", j);
    scanf("%d", k);
    temp = **jj;
    **jj=**kk;
    **kk=temp;
    printf("%d %d", *j, *k);





    return 0;
}