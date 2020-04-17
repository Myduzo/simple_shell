#include "shellib.h"
/**
 * _ctrlc - function to intercept Ctrl-C.
 * @sign: Signal.
 */
void _ctrlc(int sign)
{
	signal(sign, SIG_IGN);
	write(1,"\nPlease type 'exit' to quit.\n", 29);
	write(1, "💫 ", 5);
	signal(SIGINT, _ctrlc);
}