#include <stdio.h>
int main(void)
{
    int ch, sum=0, c=0;
    do{
        ch=getchar();
        sum+= ch;
        c++;
    }while(sum<=500 && ch!='q');
    putchar(c);




    return 0;
}