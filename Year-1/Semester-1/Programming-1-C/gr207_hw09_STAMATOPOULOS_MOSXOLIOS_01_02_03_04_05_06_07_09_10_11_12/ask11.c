#include <stdio.h>
double bath( int a, int b)
{
    double final;
    final=a*0.3+b*0.7;
    return final;
}
int main(void)
{
    int a, b, i, c=0;
    double final;
    for ( i=0; i<3; i++ )
    {
        scanf("%d%d", &a, &b);
        final = bath(a,b);
        if ( final>=8 )
        {
            c++;
        }
    }
    if ( c==0 )
    {
        printf("Kaneis den pire panw apo 8");
    }
    else
    {
        printf("%d mathites piran panw apo 8", c);
    }





    return 0;
}