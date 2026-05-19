#include <stdio.h>
int main(void)
{
    int ch;
    while ( ((ch=getchar())!='q') && (ch<'0' || ch>'9'))
    {
        putchar(ch);
    }







    return 0;
}