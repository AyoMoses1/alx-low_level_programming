#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the where the program starts:
 * It prints the last digit of a number
 *
 * Return: Always 0.
*/
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
		printf(" %d Last digit of \n", n, " %d is \n", lastDigit,
		" %d and is greater than 5")
	else if (lastDigit == 0)
		printf("%d Last digit of \n", n, "%d is \n", lastDigit, "%d and is 0 \n")
	else if (lastDigit < 6 && lastDigit != 0)
		printf(" %d Last digit of \n", n, "%d is \n", lastDigit,
		" %d and is less than 6 and not 0 \n")
	return (0);
}
