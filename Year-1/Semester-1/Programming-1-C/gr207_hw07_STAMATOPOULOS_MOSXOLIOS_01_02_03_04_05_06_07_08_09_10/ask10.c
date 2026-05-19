#include <stdio.h>
int main(void)
{
    int *p1, *p2, *p3, i, num, min, max; 
    p1=&num;
    p2=&min;
    *p2=0;
    p3=&max;
    *p3=0;
    for ( i=0; i<100; i++ )
    {
        scanf("%d", p1);
        if ( *p1<-5 && *p1<*p2 )
        {
            *p2=*p1;
        }
        else if ( *p1>10 && *p1>*p3 )
        {
            *p3=*p1;
        }
    }   
    if ( *p2==0 )
    {
        printf("Den brethike arithmos <-5\n");
    }
    else
    {
        printf("%d\n", *p2);
    }
    if ( *p3==0 )
    {
        printf("Den brethike arithmos >10\n");
    }
    else
    {
        printf("%d\n", *p3);
    }
    if ( *p2==0 && *p3==0 )
    {
        printf("Den brethike kanenas arithmos");
    }
    
    return 0;
}