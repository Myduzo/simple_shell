#include "shellib.h"
/**
*
*
*/
void _exit(int status)
{
	if (status != 0)
		{
			write(1,"98",2);
			return;
		}
	else
		return;
}
