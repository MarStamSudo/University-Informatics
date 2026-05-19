include <stdio.h>
int main(void)
{
    int a[5][20], ans, c=0, x, y, i, j;
    for ( i=0; i<5; i++ )
    {
        for ( j=0; j<20; j++ )
        {
            a[i][j] = 0;
        }
    }
    printf("1= Emfanish eleutherwn dwmatiwn");
    printf("2= Kratisi domatiou");
    printf("3= akirosi kratisis");
    printf("4= termatismos");
    scanf("%d", &ans);
    switch (ans)
    {
    case 1:
        for ( i=0; i<5; i++ )
        {
            for ( j=0; j<20; j++ )
            {
                if ( a[i][j] == 0 )
                {
                    printf("To domatio %d stin pteriga %d einai elefthero\n", j, i);
                }
            }
        }
    break;
    case 2:
        printf("Balte mia pteriga: ");
        do{
            scanf("%d", &x);
            for ( j=0; j<20; j++ )
            {
                if ( a[x][j]== 0 )
                {
                    a[x][j] = 1;
                    c=1;
                    break;
                }
            }

        }while(c==0);
    break;
    case 3:
        printf("Dwse pteriga kai dwmatio: ");
        scanf("%d%d", &x, &y);
        a[x][y] = 0;
    break;
    case 4:
    break;
    }
    



    return 0;
}