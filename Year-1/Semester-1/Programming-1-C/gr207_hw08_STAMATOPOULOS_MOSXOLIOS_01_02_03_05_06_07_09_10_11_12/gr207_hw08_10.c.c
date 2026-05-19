#include <stdio.h>
#define k 5
int main(void)
{
    int arr[k][k], i, j, sum1=0, sum2=0;
    printf("Dwse stoixeia: ");  
    for ( i=0; i<k; i++ )
    {
        for ( j=0; j<k; j++ )
        {
            scanf("%d", *(arr+i)+j);
        }
    }
    for ( i=0; i<k; i++ )
    {
        for ( j=0; j<k; j++ )
        {
            if ( i==j )
            {
                sum1= sum1 + *(*(arr+i)+j);
            }
             else if ( j == 4 - i )
            {
                sum2 = sum2 + *(*(arr+i)+j);
            }
        }
    }
    if ( sum1 == sum2 )
    {
        printf("To athroisma twn stoixeiwn tis kyria diagwnioy einai isa me tiw deutereuousas");
    }
    else 
    {
        printf("To athroisma twn stoixeiwn tis kyria diagwnioy den einai isa me tiw deutereuousas");
    }




    return 0;
}