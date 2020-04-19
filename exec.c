#include "shellib.h"
/**
 * exec - exec function of a program
 * @st: userin
 */
void exec(char *st)
{
char **ch = NULL;
char *chp = NULL;
int status;
pid_t id;

ch = sp(st, " ");
chp = _path(ch);
if (chp != NULL)
{
free(ch[0]);
ch[0] = chp;
}
id = fork();
if (id == -1)
{
perror("Error");
free(st);
}
if (id == 0)
{
if (execve(ch[0], ch, environ))
{
perror("error");
_free(ch);
exit(EXIT_FAILURE);
}
exit(EXIT_SUCCESS);
}
wait(&status);
_free(ch);
}
