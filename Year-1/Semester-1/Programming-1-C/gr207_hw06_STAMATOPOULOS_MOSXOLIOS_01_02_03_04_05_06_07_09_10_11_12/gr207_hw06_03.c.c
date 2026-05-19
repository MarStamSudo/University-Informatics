#include <stdio.h>
int main(void)
{
	double a[100], x, min=9999;
	int i, c=0;
	printf("Dwse arithmous >5: ");
	for ( i=0; i<100; i++ )
	{
		do
		{
			scanf("%lf", &x);
		}while ( x<5 && x!=-1 );
		if ( x==-1 )
		{
			break;
		}
		if ( x<min )
		{
			min = x;
		}
		a[i] = x;
		c++;
	}
	for ( i=0; i<c; i++ )
	{
		printf("%lf ", a[i]), min;
	}
	




	return 0;
}
