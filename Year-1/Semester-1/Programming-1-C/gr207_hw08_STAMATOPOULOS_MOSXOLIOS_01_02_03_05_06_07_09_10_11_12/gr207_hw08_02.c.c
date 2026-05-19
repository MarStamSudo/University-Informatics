#include <stdio.h>
int main(void)
{
    double arr[] = {1.3, -4.1, -3.8, 9.4, 2.5}, temp, *p1 = arr, *p2 = arr+4;
    while(p1<p2)
    {
        temp=*p1;
        *p1=*p2;
        *p2=temp;
        p1++;
        p2--;
    }



    return 0;
}