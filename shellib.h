#ifndef _SHELL_H_
#define _SHELL_H_

#include <stab.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

void exec(char *st);
char **sp(char *st, char *dec);
char **pa(char *st);
void _exit(int status);
size_t _strlen(const char *s);
char *_strdup(const char *s);
char *_strcat(char *dest, const char *src);
char *_strtok(char s[],const char *delims);


#endif
