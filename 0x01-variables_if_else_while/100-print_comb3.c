#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
<<<<<<< HEAD
	int n, m;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
=======
	int i;

	int j;

	for (i = '0'; i < '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			
			if (i == '8' && j == '9')
			continue;
		        putchar(',');
			putchar(' ');
>>>>>>> 5829e4e8fd9c7deb87cf2bf62fe95c82293c8a01
		}
	}
	putchar('\n');
	return (0);
}
