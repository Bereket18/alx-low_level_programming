<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 0b97fec8b710fa86962222db40467bf6c55c9f55
#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
<<<<<<< HEAD
	int a, b, c;
	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				c = a * b;
				_putchar(44);
				_putchar(32);
				if (c <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(c + 48);
				}
				else if (c <= 99)
				{
					_putchar(32);
					_putchar((c / 10) + 48);
					_putchar((c % 10) + 48);
				}
				else
				{
					_putchar(((c / 100) % 10) + 48);
					_putchar(((c / 10) % 10) + 48);
					_putchar((c % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
=======
#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 * ?
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar(48);
			for (b = 1; b <= n; b++)
			{
				c = a * b;
				_putchar(44);
				_putchar(32);
				if (c <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(c + 48);
				}
				else if (c <= 99)
				{
					_putchar(32);
					_putchar((c / 10) + 48);
					_putchar((c % 10) + 48);
				}
				else
				{
					_putchar(((c / 100) % 10) + 48);
					_putchar(((c / 10) % 10) + 48);
					_putchar((c % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
>>>>>>> ff8d59dfbf0077cd70d8849252223cbb6977092c
=======
int i, j, k;
if (n >= 0 && n <= 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = j * i;
if (j == 0)
{
_putchar(k + '0');
}
else if (k < 10 && j != 0)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
_putchar(k + '0');
}
else if (k >= 10 && k < 100)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((k / 10) + '0');
_putchar((k % 10) + '0');
}
else if (k >= 100)
{
_putchar(',');
_putchar(' ');
_putchar((k / 100) + '0');
_putchar(((k / 10) % 10) + '0');
_putchar((k % 10) + '0');
}
}
_putchar('\n');
}
}
}
>>>>>>> 0b97fec8b710fa86962222db40467bf6c55c9f55
