// KeithEuler.cpp : main project file.

#include "stdafx.h"
#include <stdio.h>

using namespace System;

int main(array<System::String ^> ^args)
{
	int sum = 0;
	int a[3] = { 0, 0, 1 };

	while(a[2] < 4000000)
	{
		if(!(a[2] % 2))
			sum += a[2];

		a[0] = a[1];
		a[1] = a[2];
		a[2] = a[0] + a[1];
  	}
	printf ("TOTAL = %d", sum);
	printf ("\n");
}
