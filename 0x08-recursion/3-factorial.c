#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: If n > 0 - The factorial of n.
 * 	   If n < 0 - 1 to indicate error.
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);
	else if (n >= &&n n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
