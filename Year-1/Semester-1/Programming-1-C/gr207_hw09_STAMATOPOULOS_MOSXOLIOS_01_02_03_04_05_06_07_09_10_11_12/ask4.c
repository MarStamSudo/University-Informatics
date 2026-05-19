#include <stdio.h>
int main(void)
{
    int ch, sum;
    do{
    ch=getchar();
    if ( ch>='a' && ch<='z' )
    {
        if ((ch+5)>122)
        {
            sum=ch+5-122;
            ch=96+sum;
        }
        else
        {
            ch+=5;
        }
        putchar(ch);
    }
    else if ( ch>='A' && ch<='Z' )
    {
        if ((ch+5)>90)
        {
            sum=ch+5-90;
            ch=64+sum;
        }
        else
        {
            ch+=5;
        }
        putchar(ch);
    }
    else
    {
        putchar(ch);
    }
    
    }while(ch!='\n');

    return 0;
}