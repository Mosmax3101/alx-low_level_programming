#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * except q and e
 *  
 *Return: Always 0 (Success)
 */

int main(void)
{
	char a = 'a';
	 
	while (a <= 'z') 
	{
		if (a != 'e' && a != 'q')
		{
			putchar(a);
		}
		a++;
	}
	putchar('n\');
	return (0);
}
