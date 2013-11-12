#include <stdio.h>
#include <math.h>

void main()
{
		int sum, even;
		int last3[3] = { 1, 2, 4 };
		
		while( sum <= 4000000)
		{
			last3[0] = last3[1];
			last3[1] = last3[2];
			last3[2] = last3[0] * last3[1];

			even = last3[2] & 1;
			
			if(last3[2] & 1)
			{
				sum = sum + last3[2];
			}
		}

		printf ("TOTAL = %d", sum);
}