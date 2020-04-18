#include "shellib.h"
/**
 * _ctrlc -Ctrl-C.
 * @sign: Signal.
 */
void _ctrlc(int sign)
{
	signal(sign, SIG_IGN);
	_printf("\nPlease type 'exit' to quit.\n");
	_printf("💫 ");
	signal(SIGINT, _ctrlc);
}
