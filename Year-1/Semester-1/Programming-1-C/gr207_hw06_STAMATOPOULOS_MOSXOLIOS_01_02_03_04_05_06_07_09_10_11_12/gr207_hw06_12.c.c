#include <stdio.h>
int main(void)
{
    int a[3][4], x, i, j;
    for ( i=0; i<3; i++ )
    {
        for ( j=0; j<4; j++ )
        {
            scanf("%d", &x);
            a[i][j]=x;
        }
    }
    for (i = 0; i < 3; i++)
    {
        int max = a[i][0];
        int ar = 0;
        for (j = 0; j < 4; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                ar = j;
            }
        }
        for (j = 0; j < ar; j++)
        {
            a[i][j] = max;
        }
    }
     for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }
    }






    return 0;
}