#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	printf("Last digit of %i is %i", n, ld);
	if (ld > 5)
	{
	puts(" and is greater than 5");
	}
	else if (ld == 0)
	{
	puts(" and is 0");
	}
	else if ((ld < 6) && (ld != 0))
	{
	puts(" and is less than 6 and not 0");
	}
	return (0);
}
