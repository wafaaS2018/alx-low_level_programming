#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: always 0;
 *
*/
void print_alphabet_x10(void)
{
	char w;
	char a;

	for (a = 0; a < 10; a++)
	{
		for (w = 'a'; w <= 'z'; w++)
		{
			_putchar(w);
		}
			_putchar('\n');
	}
}
