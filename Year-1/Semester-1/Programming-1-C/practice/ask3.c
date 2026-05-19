#include <stdio.h>
void calc( float bath[][3]);
int main(void)
{
    int i=0, j=0;
    float bath[3][3];
    printf("Dwse bathmous:");
    for ( i=0; i<3; i++ )
    {
        for ( j=0; j<3; j++ )
        {
            scanf("%f", &bath[i][j]);
        }
    }
    calc( bath );
    return 0;
}
void calc( float bath[][3])
{
    for ( int i=0; i<3; i++ )
    {
        float sum=0;
        for ( int j=0; j<3; j++ )
        {
            sum+=bath[i][j];
        }
        float MO = (float)(sum/3);
        printf("O mesos oros tou %dou mathiti einai: %.2f\n", i+1, MO );
    }
}