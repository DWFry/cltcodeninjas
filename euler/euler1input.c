#include <stdio.h>
#include <math.h>

void main()
{
	int total = 0, div1 = 3, div2 = 5, max = 999;
		
	printf("max = %d ",max);
	printf("Enter range max: ");
	scanf("%d",&max);

	printf("div1 = %d ",div1);
	printf("Enter first divisor: ");
	scanf("%d",&div1);

	printf("div2 = %d ",div2);
	printf("Enter second divisor: ");
	scanf("%d",&div2);
       
	while( div1 <= max )
	{
		total = total + div1;
		div1 = div1 + 3;
	}
		
	while( div2 <= max )
	{
		if( div2 % 3 != 0 )
		{
		total = total + div2;
		}
		div2 = div2 + 5;
	}

	printf ("TOTAL = %d", total);
}
