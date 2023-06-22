#include <stdio.h>
#include <math.h>

/**
 *Function to find the largest prime factor of a given number
 * 
 * Divide the number by 2 until it is no longer divisible by 2
 *
 * Check for division by odd prime numbers starting from 3
 *
 * If the remaining number is greater than 2, it is a prime factor
 */

long long largestPrimeFactor(long long number)
{
	long long i, largestFactor;

	while (number % 2 == 0)
	{
		largestFactor = 2;
		number = number / 2;
	}

	for (i = 3; i <= sqrt(number); i = i + 2)
	{
		while (number % i == 0)
		{
			largestFactor = i;
			number = number / i;
		}
	}

	if (number > 2)
	{
		largestFactor = number;
	}

	return (largestFactor);
}
