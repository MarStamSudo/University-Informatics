#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char str[100];
    int c_peza=0;
    int c_kefalaia=0;
    while ( strncmp(str, "end", 3) != 0 )
    {
        fgets(str, 100, stdin);
        for ( int i=0; i<strlen(str); i++ )
        {
            if ( str[i]>='a' && str[i]<='z' )
            {
                str[i]= str[i] - 32;
                c_peza++;
            }
            else if ( str[i]>='A' && str[i]<='Z' )
            {
                str[i]= str[i] + 32;
                c_kefalaia++;
            }
        }
    }
    printf("%s ", str);
    return 0;
}