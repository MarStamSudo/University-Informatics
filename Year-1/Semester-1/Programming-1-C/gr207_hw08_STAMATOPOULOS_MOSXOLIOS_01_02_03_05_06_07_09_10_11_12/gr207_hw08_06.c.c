#include <stdio.h>
int main(void)
{
    int *arr[3], a, b, c, *j, *k, *m;
    arr[0]=&a;
    arr[1]=&b;
    arr[2]=&c;
    scanf("%d", arr[0]);
    scanf("%d", arr[1]);
    do{
        printf("Dwse timh C megaliteri toy a kai b: ");
        scanf("%d", arr[2]);
    }while ( *arr[2]<*arr[0] || *arr[2]<*arr[1] );
    printf("\n");
    if ( (*arr[0]) * (*arr[0]) + (*arr[1]) * (*arr[1]) == (*arr[2]) * (*arr[2]) )
    {
        printf("To trigwno einai orthogonio\n");
    }
    else if ( (*arr[0]) * (*arr[0]) + (*arr[1]) * (*arr[1]) < (*arr[2]) * (*arr[2]) )
    {
        printf("To trigwno einai ambligonio\n");
    }
    else 
    {
        printf("To trigwno einai oksigonio\n");
    }




    return 0;
}