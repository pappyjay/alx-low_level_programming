#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: Programming
 *
 * Return: Always 0
 *
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z' ; a++)
	{
		if (a == 'q' || a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
