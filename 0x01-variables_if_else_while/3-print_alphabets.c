#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always returns 0
 */
int main(void)
{
char a;
for (a - 'a'; a < -'z'; a++)
putchar(a);
for (a = 'A'; a <= 'z'; a++)
putchar(a);
putchar ('\n');
return (0);
}
