#include <stdio.h>
#include <math.h>

void main()
{
	int total, mult3, mult5;
		
	mult3 = 3;
	mult5 = 5;
	total = 0;
       
while( mult3 <= 999 )
{
	total = total + mult3;
	mult3 = mult3 + 3;
}
		
while( mult5 <= 999 )
{
	if( mult5 % 3 != 0 )
	{
		total = total + mult5;
		mult5 = mult5 + 5;
	}

	printf ("TOTAL = %d", total);
}
