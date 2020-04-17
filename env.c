#include "shellib.h"
/**
 * _env - Prints environ.
 *
 * Return: (void)
 */

void _env(void)
{
	int x = 0;

	while (environ[x])
	{
		_printf(environ[x]);
		_printf("\n");
		x++;
	}
}
