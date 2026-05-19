#include <stdio.h>
void bath( int a )
{
    if ( a>=18 )
    {
        printf("Excellent\n");
    }
    else if ( a>=16 )
    {
        printf("Very good\n");
    }
    else if ( a>=13 )
    {
        printf("Good\n");      
    }
    else if ( a>=10 )
    {
        printf("Dangerous zone\n");
    }
    else
    {
        printf("Need Help\n");
    }
}
int main(void)
{
    int x, i;
    for ( i=0; i<5; i++ )
    {
        scanf("%d", &x);
        bath(x);
    }





    return 0;
}