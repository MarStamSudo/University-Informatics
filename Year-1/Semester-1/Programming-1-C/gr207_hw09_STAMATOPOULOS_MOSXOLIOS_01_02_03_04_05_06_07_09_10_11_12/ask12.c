#include <stdio.h>
int arr( int a, int b)
{
    if ( a%b==0 )
    {
        printf("Einai pollaplasia");
    }
    else if ( b%a==0 )
    {
        printf("Einai pollaplasia");
    }
    else
    {
        printf("Den einai pollaplasia");
    }
}
int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    arr(x,y);
    return 0;
}