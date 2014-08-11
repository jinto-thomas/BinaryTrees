#include <stdio.h>

int countKeys(int n)
{
		if (n <= 1)
				return 1;
		else {
			return (2 * factorial(n)) / (factorial(n+1) * factorial(n));	}



