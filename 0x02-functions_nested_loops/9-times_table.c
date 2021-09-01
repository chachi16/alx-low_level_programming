#include "main.h"
/**
 * times_table - prints 9 times table
 *returns: nothing
 */
void times_table(void)
{
int a, b, mult;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (b = 0 ; b <= 9 ; b++)
		{
			mult = a * b;

			if (mult <= 9)
			{
				if (b != 0)
				{
					_putchar(' ');
				}
				_putchar(mult + '0');
			}
			else
			{
				_putchar(mult / 10 + '0');
				_putchar(mult % 10 + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
