#include <stdio.h>
#define SIZE 100
int main(void)
{
    int *ptr, arr[SIZE];
    ptr=arr;
    while(ptr<arr+SIZE)
    {
        scanf("%d", ptr);
        if ( *ptr!=-1 && *ptr!=0 )
        {
            ptr++;
        }
        else if ( *ptr==0 )
        {
            break;
        }
    }   
    printf("%d", ptr-arr);



    return 0;
}