#include <stdio.h>
int main(void)
{
	double a[100], x;
	int i;
	scanf("%lf", &x);
	a[0] = x;
	for ( i=1; i<100; i++ )
	{
		do
		{
			scanf("%lf", &x);
			a[i] = x;
		}while ( a[i-1]<a[i] );
	}
	for ( i=0; i<100; i++ )
	{
		printf("%lf", a[i]);
	}



	return 0;
}
