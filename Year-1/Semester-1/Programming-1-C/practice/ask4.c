#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str[101];
    printf("Grapse xaraktires\n");
    fgets(str, 101, stdin);
    printf("\n");
    int c1=0;
    for ( int i=0; i<strlen(str); i++ )
    {
        if ( str[i]== 'x' )
        {
            c1++;
        }
        else if ( str[i]== 'z' )
        {
            str[i]='s';
        }
        else if ( str[i] == ' ' )
        {
            str[i]='_';
        }
    }
    printf("%d %d\n", strlen(str)-1, c1);
    printf("To alfarithmitiko einai: %s\n", str);




    return 0;
}