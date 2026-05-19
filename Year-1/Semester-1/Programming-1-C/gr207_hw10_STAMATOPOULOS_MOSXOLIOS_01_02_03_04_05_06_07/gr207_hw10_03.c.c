#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int comp( int a[] );
#define k 3
int main(void)
{
    int i, a[k];
    srand(time(NULL));  
    for ( i=0; i<k; i++ )
    {
    int r = 5 + rand() % 16;
    a[i]=r;
    }
    int res;
    res = comp( a );
    if ( res==1 )
    {
        printf("Einai se aujousa seira.");
    }
    else
    {
        printf("Einai se fthinousa seira.");
    }
    return 0;
}
int comp( int a[] )
{
   int i;
   int c;
   for ( i=0; i<k; i++ )
   {
        if ( a[i]>a[i+1] )
        {
             c=0;
        }
        else if ( a[i]<a[i+1] )
        {
             c=1;
        }
   }
   if ( c==0 )
   {
        return 2;
   }
   else
   {
        return 1;
   }
}