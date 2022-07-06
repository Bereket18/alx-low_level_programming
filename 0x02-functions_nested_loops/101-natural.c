<<<<<<< HEAD
#include <stdio.h>
/**
 * main - prints the sum of all the multiples of 3 or 5 below 1024
 * @void: void
 * Return: 0 Success
 */
int main(void)
{
	int n;
	int sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", sum);
	return (0);
}
=======
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
>>>>>>> 0b97fec8b710fa86962222db40467bf6c55c9f55
