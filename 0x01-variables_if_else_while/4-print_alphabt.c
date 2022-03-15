#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Program entry point
 *
 * Return: 0 on success. Error code otherwise
=======
 * main - prints the alphabet in lowercase,
 * except q and e
 *  
 *Return: Always 0 (Success)
>>>>>>> d9c18212af10e74eb08d960e203699a54e93747e
 */

int main(void)
{
<<<<<<< HEAD
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar ('\n');
=======
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
>>>>>>> d9c18212af10e74eb08d960e203699a54e93747e
	return (0);
}
