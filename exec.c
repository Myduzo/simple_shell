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

	id = fork();

	if (id == -1)
	{
		free(st);
		perror("Error");
	}
	ch = sp(st, " ");
	if (ch == NULL)
	free(ch);
	chp = _path(ch);
	if (chp == NULL)
	free(chp);
	if (id == 0)
	{
		if (execve(chp, ch, environ) == -1)
		{
			execve(ch[0], ch, environ);
			free(ch);
		}
		perror("ERROR");
		free(ch);
		exit(EXIT_FAILURE);
	}
		wait(&status);
}
