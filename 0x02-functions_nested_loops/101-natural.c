#include "main.h"

/**
 * main - entry point
 * Description: Calculate sum of all multiples
 *		 of 3 and 5
 *		 below 1024
 * Return: 0
 */

int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
