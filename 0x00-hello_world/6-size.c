#include <stdio.h>
/*
 * Main - Main block,This should print the size of the various data types
 * Return: 0
 */

int main(void)
{
	printf("Size of a char: %i byte(s)\n", sizeof(char));
	printf("Size of an int : %i byte(s)\n", sizeof(int));
	printtf("Size of long int : %i byte(s)\n",sizeof(long int));
	printf("Size of long long int : %i byte(s)\n", sizeof(long long int));
	printf("SIze of float: %i byte(s)\n", sizeof(float));
	return (0);
}