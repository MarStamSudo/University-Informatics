#include <stdio.h>
int main(void)
{
        int a[5][5];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (i == j || i + j == 4)          
                a[i][j] = 1;
            else if (i < j && i + j < 4)       
                a[i][j] = 2;
            else if (i < j && i + j > 4)       
                a[i][j] = 3;
            else if (i > j && i + j > 4)       
                a[i][j] = 4;
            else if (i > j && i + j < 4)
                a[i][j] = 5;
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
    }






    return 0;
}