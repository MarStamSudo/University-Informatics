#include <stdio.h>
int main(void)
{
    int i=0, ch, arr[10];
    while ( i<10 )
    {
        ch=getchar();
        if ( ch<'0' || ch>'9' )
        {
            arr[i]=ch;
            i++;
        }

    }
    for ( i=0; i<10; i++ )
    {
        putchar(arr[i]);
    }






    return 0;
}