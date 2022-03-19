#include "main.h"

/**
 *more_numbers - print 10 times the numbers from 0 to 14
 *
 * Return: void
 *
 */
void more_numbers(void)
{
	int n;
	int counter;

	for (n = 0; n <= 14; n++)
	{
		for (counter = 0; counter < 10, counter++)
		{
			if (n >= 10)
				_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}
		_putchar('\n');

	}
}
