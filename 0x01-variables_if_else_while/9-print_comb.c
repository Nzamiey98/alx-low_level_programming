#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		if (n != 9)
		{
			putchar(' , ');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}

		n++;
	}
	return (0);
}
