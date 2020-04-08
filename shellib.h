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
void exec(char *st);
<<<<<<< HEAD
char **sp(char* st, char *dec);
=======
char **sp(char* st);
char** pa(char *st);
>>>>>>> 7174e604b0a3344b231a55afa5cbfd0e76c8cfc0


#endif
