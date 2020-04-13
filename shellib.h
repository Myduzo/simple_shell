#ifndef _SHELL_H_
#define _SHELL_H_

#include <stab.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

void exec(char *st);
char **sp(char* st, char *dec);
char **_path (char** p, char *str);
char *_getenv(char *st);
size_t _strlen(const char *s);
char *_strdup(const char *s);
char *_strcat(char *dest, const char *src);


#endif
