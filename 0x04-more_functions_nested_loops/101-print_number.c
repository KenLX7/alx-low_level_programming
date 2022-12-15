#include "main.h"
#include "stdio.h"
/**
 *print_number - prints an integer
 *the integer to print
 **/
void print_number(int n)
{
	int i;
	int max;
	int minVal = n + 1 == -2147483640 - 7 ? -1 : 0;
	int rem = n < 0 ? 0 - n + minVal : n;

	max = 1;
	max *= 100000;
	max *= 100000;

	if (n < 0)
		_putchar('-');

	for (i = 9; i >= 0; i--)
	{
		int power = b10_pow(i);

		if (rem > power - 1 && !(i == 0 && minVal < 0))
			_putchar((int)((rem / power) % 10) + '0');
		else if (i == 0 && minVal >= 0)
			_putchar((int)((rem / power) % 10) + '0');
		if (i == 0 && minVal < 0)
			_putchar('8');
	}
}
