#include <stdio.h>
#include <math.h>

void main()
{
	int total, mult3, mult5;
		
	mult3 = 3;
	mult5 = 5;
	limit = 999;
	total = 0;


	printf("limit= %d",limit);
	printf("Enter range limit: ");
	scanf("%d",&limit);

	printf("mult3= %d",mult3);
	printf("Enter first divisor: ");
	scanf("%d",&mult3);

	printf("mult5= %d",mult5);
	printf("Enter second divisor: ");
	scanf("%d",&mult5);
       
	while( mult3 <= limit )
	{
		total = total + mult3;
		mult3 = mult3 + 3;
	}
		
	while( mult5 <= limit )
	{
		if( mult5 % 3 != 0 )
		{
		total = total + mult5;
		}
		mult5 = mult5 + 5;
	}

	printf ("TOTAL = %d", total);
}
