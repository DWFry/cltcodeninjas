#include "stdafx.h"

#include <stdio.h>
#include <math.h>

void main()
{
	int total = 0, div1count = 0, div2count = 0, div1 = 0, div2 = 0, max = 0;
		
	printf("Enter first divisor: ");
	scanf_s("%d",&div1);

	printf("Enter second divisor: ");
	scanf_s("%d",&div2);
	
	printf("Enter range max: ");
	scanf_s("%d",&max);
       
	while( div1count < max )
	{
		total = total + div1count;
		div1count = div1count + div1;
	}
		
	while( div2count < max )
	{
		if( div2count % div1 != 0 )
		{
		total = total + div2count;
		}
		div2count = div2count + div2;
	}

	printf ("TOTAL = %d", total);
	printf ("\n");
	printf("Press Enter to continue");
}
