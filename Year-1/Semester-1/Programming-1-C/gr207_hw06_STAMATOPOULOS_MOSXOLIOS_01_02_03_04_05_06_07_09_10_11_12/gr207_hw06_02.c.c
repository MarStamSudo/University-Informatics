#include <stdio.h>
int main(void)
{
	int a[5], b[5], x, i;
	printf("Dwse 5 stoixeia: ");
	for ( i=0; i<5; i++ )
	{
		scanf("%d", &x);
		a[i] = x;
	}
	for ( i=0; i<5; i++ )
	{
		if ( a[i]%2==0 )
		{
			b[i] = a[i];
		}
		else
		{
			b[i] = a[i]*2;
		}
	}
	for ( i=0; i<5; i++ )
	{
		printf("%d ", b[i]);
	}
	printf("\n");


	return 0;
}
