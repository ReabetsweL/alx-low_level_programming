/* 
 * File - 1-last_digit.c
 * Auth: ReabetsweL 
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main Prints the last number of a randomly generated number
 * 	and whether is it greater than 5, less than 6, or 0.
 *
 * Retrun: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) >5)
	{
		printf("Last digit of %d is greater than 5\n",
			n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
			n, n % 10);
	}
	else
	{
		printf("Last digit of %d and is %d and is 0\n",
			n, n % 10);
	}

	return (0);

}
