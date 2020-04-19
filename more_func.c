#include "shellib.h"

/**
 * _strcmp - Compares two strings
 * @str1: First string.
 * @str2: Second string.
 * Return: 1 or 0.
 */
int _strcmp(char *str1, char *str2)
{
	int i = 0;

	while ((str1[i] == str2[i]) && str1[i] != '\0')
		i++;

	if (str1[i] > str2[i] || str1[i] < str2[i])
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * _ex - exit
 * @buff: Input
 */
/*
void _ex(char *buff)
{
	if (_strcmp(buff, "exit") == 0)
	{
		exit(0);
	}
}
*/

/**
 * _prout - print prompt
 */
void _prout(void)
{
	if (isatty(STDIN_FILENO))
		write(1, "💫 ", 5);
}


/**
 * print_char - Prints a single char to stdout.
 *
 * @c: Char to print.
 *
 * Return: write stdlib execution (int)
 */
int print_char(char c)
{
	return (write(1, &c, 1));
}

/**
 * _printf - Prints a string char to stdout.
 *
 * @str: String to print.
 *
 * Return: (void)
 */
void _printf(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		print_char(str[i]);
	}
}
