#ifndef _SHELL_H_
#define _SHELL_H_

#include <stab.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/wait.h>


void exec(char *st);
char **sp(char *st, char *dec);
char **pa(char *st);
void _exit(int status);
char **_path(char **p, char *str);
size_t _strlen(const char *s);
char *_strdup(const char *s);
char *_strcat(char *dest, const char *src);
char *_strtok(char s[],const char *delims);

/**
* struct class - a new class
* @ch : character specifier
* @f : function required 
*/
typedef struct class
{
	char *ch;
	int (*f)(va_list);
}class;

class check[] = {
	{"e", exec},
	{"s", sp},
	{"p", pa},
	{"q", _exit},
	{"a", _path},
	{"l", _strlen},
	{"d", _strdup},
	{"c", _strcat},
	{"t", _strtok},
	{NULL, NULL},
};




#endif
