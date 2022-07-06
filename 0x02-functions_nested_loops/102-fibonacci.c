<<<<<<< HEAD
<<<<<<< HEAD
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
long int i, j, k, next;
j = 1;
k = 2;
for (i = 1; i <= 50; ++i)
{
if (j != 20365011074)
{
printf("%ld, ", j);
}
else
{
printf("%ld\n", j);
}
next = j + k;
j = k;
k = next;
}
return (0);
}
=======
#include <stdio.h>
/**
 * main - prints the add of the fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int c;
	long int n1, n2, fn;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (c = 0; c < 48; c++)
	{
		fn = n1 + n2;
		printf(", %ld", fn);
		n1 = n2;
		n2 = fn;
	}
	printf("\n");
	return (0);
}
>>>>>>> ff8d59dfbf0077cd70d8849252223cbb6977092c
=======
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	for (i = 2; i < 50; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
		if (i == 49)
			printf("%ld\n", fibonacci[i]);
		else
			printf("%ld, ", fibonacci[i]);
	}

	return (0);
}
>>>>>>> 0b97fec8b710fa86962222db40467bf6c55c9f55
