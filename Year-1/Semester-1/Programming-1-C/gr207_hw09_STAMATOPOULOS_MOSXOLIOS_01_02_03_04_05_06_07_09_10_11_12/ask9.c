#include <stdio.h>
int cube( int a )
{
    int power;
    power= a*a;
    return power;
}
int cube3( int a )
{
    int power1= a*a*a;
    return  power1;
}
int main(void)
{
    int sum ,x;
    scanf("%d", &x);
    sum = cube(cube3(x));
    printf("%d", sum);






    return 0;
}