#include <stdio.h>
int main(void)
{
	int i;
	double x, a, b, g[10];
	printf("grapse bathmo: ");
	for ( i=0; i<10; i++ )
	{
		scanf("%lf", &x);
		g[i] = x;
	}
	printf("grapse duo arithmous: ");
	do
	{
		scanf("%lf%lf", &a, &b);
	}while(b<a);
	printf("\n");
	int c=0;
	for ( i=0; i<10; i++ )
	{
		if ( g[i]>=a && g[i]<=b )
		{
			c++;
		}
	}
	printf("%d mathites briskontai anamesa sto diastima pou dwsate\n", c);



	return 0;
}
