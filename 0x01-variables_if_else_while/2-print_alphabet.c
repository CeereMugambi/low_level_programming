#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: This program prints alphabets in lowercase
 * Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
