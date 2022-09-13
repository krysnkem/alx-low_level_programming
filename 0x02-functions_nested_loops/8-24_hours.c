#include "main.h"

/**
 * jack_bauer - counts 24hrs
 *
 * Description: Counts in 24 hours
 * Return: void
 */
void jack_bauer(void)
{
	int hours;
	int mins;

	hours = 0;
	while (hours < 24)
	{
		mins = 0;
		while (mins < 60)
		{
			_putchar((int)(hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((int)(mins / 10) + '0');
			_putchar((mins % 10) + '0');
			_putchar('\n');
			++mins;
		}
		++hours;
	}
}
