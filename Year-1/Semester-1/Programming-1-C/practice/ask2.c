#include <stdio.h>
#include <string.h>
void process_string( char *str, int *k, int *arr );
int main(void)
{
    char str[51];
    fgets(str, 51, stdin);
    int k=0, arr=0;
    process_string( str, &k, &arr);
    printf(" To antistrammeno apotelesma einai: %s kai ta kefalaia einai %d kai oi arithmoi einai %d", str, k, arr);




    return 0;
}
void process_string( char *str, int *k, int *arr )
{
    for ( int i=0; i<strlen(str)-1; i++ )
    {
        if ( str[i]>='A' && str[i]<='Z' )
        {
            (*k)++;
        }
        else if ( str[i]>='0' && str[i]<='9' )
        {
            (*arr)++;
        }
    }
    int i=0, j=strlen(str)-1;
    do
    {
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        i++, j--;
    } while ( i<j );
    
}