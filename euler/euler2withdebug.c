#include <stdio.h>
#include <math.h>

void main()
{
	long sum = 2;
	long a[3] = { 0, 1, 2 };

	while(a[2] < 4000000)
	{
		if(a[2] % 2 != 0)
		{
			sum = sum + a[2];
 		}

		a[0] = a[1];
		a[1] = a[2];
		a[2] = a[0] + a[1];
  	}

	printf ("TOTAL = %d", sum);
}