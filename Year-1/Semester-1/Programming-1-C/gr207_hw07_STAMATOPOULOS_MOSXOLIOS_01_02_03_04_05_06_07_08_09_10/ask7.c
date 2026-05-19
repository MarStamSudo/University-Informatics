#include <stdio.h>
int main(void)
{
    int *p1, *p2, *p3, x, y, z;
    p1=&x;
    p2=&y;
    p3=&z;
    do{
    scanf("%d%d%d", p1, p2, p3);
    }while(*p1>=0 || *p2>=0 || *p3>=0);
        if ( *p2==*p1+1 && *p3==*p2+1 )
        {
            printf("Einai se diadoxikh aujousa seira");
        }
        else
        {
            printf("Den einai se diadoxiki aujousa seira");
        }
    return 0;
}