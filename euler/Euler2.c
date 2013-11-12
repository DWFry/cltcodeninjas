#include <stdio.h>
#include <math.h>

void main()
{
	unsigned int sum = 2;
	unsigned int a[3] = { 0, 1, 2 };

	while(a[2] < 4000000)
	{
		printf ("a[2] = %d", a[2]);

		if(a[2] % 2 != 0)
		{
			sum = sum + a[2];
 			printf (" - O\n");
 		}
 		else
 		{
 			printf (" - E\n");
 		}

		a[0] = a[1];
		a[1] = a[2];
		a[2] = a[0] + a[1];
  	}

	printf ("TOTAL = %d", sum);
}