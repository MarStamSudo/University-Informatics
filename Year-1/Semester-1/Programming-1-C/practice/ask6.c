#include <stdio.h>
#include <string.h>
int main(void)
{
    char str[101];
    printf("Dwse keimeno:");
    fgets(str, 101, stdin);
    int i=0, j=0;
    printf("Arxiko keimeno: %s", str);
    for ( i=0, j=strlen(str)-1; i<j; i++, j-- )
    {
            char temp = str[i];
            str[i]=str[j];
            str[j]=temp;
    }
    printf("Antistrammeno keimeno: %s", str);
    return 0;
}