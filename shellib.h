#ifndef _SHELL_H_
#define _SHELL_H_

#include <stab.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>

size_t my_strlen(const char *s);
void exec(char *st, int num);
char *sp(char* st);


#endif
