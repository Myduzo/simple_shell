#include "shellib.h"
/**
 * exec - exec function of a program
 * @st: userin
 */
void exec(char *st)
{
	char **ch;
	char *s;
	char **strp;
	char *chp;
	int status;
	pid_t id;

	id = fork();

	if (id == -1)
	{
		perror("Error");
	}
	ch = sp(st, " ");
	s = getenv("PATH");
	strp = sp(s, ":");
	chp = _path(strp, ch[0]);

	if (id == 0)
	{
		if (execve(chp, ch, NULL) == -1)
		{
			execve(ch[0], ch, NULL);
		}
		perror("ERROR");
		exit(EXIT_FAILURE);
	}

		wait(&status);

}
