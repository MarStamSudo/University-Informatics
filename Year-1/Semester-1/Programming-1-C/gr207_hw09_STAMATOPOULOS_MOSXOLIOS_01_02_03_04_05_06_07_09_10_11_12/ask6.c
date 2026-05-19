#include <stdio.h>
#define k 10
int main(void)
{
    char arr[k];
    int ch, i=0, c=0, j, tr;
    while ( (ch=getchar())!='q' && i<k && ch!='\n' )
    {   
            tr=1;
            for ( j=0; j<c; j++ )
            {
                if ( ch==arr[j] )
                {
                    tr=0;
                    break;
                }
            }
            if ( tr == 1)
            {
                arr[i]=ch;
                i++;
                c++;
            }
    }
    for ( i=0; i<c; i++ )
    {
        putchar(arr[i]);
    }
    return 0;
}