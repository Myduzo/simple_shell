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
#include <signal.h>

extern char **environ;
void exec(char *st);
char **sp(char *st, char *dec);
char *_path(char **str);
char *_getenv(char *st);
size_t _strlen(const char *s);
char *_strdup(char *s);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
void _free(char **av);
int _strcmp(char *str1, char *str2);
void _ex(char *buff);
void _prout(void);
void _printf(char *str);
int _env(char *buff);
void _ctrlc(int sign);

#endif
