#include <stdio.h>
double upol( double a, double b, double *embadon);
int main(void)
{
    double a, b, perimetros, embadon;
    printf("Dwse duo arithmous");
    scanf("%lf%lf", &a, &b);

    perimetros = upol(a, b, &embadon);
    printf("H perimetros einai: %.2f ", perimetros);
    printf("To embadon einai: %.2f", embadon);





    return 0;   
}
double upol( double a, double b, double *embadon)
{
    *embadon = a*b;
    return ( 2*a + 2*b );
}