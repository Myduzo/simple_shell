#include "shellib.h"
/**
 * exec - exec function of a program
 * @st: userin
 */
void exec(char *st)
{

	int status;
	pid_t id;

	id = fork();

	if (id == -1)
	{
		perror("Error");
	}
	char **ch = sp(st, " ");
	char *s = getenv("PATH");
	char **strp = sp(s, ":");
	char *chp = _path(strp, ch[0]);

	if (id == 0)
	{
		if (execve(chp, ch, NULL) == -1)
		{
			execve(ch[0], ch, NULL);
			free(ch);
			free(strp);
			free(chp);
		}
		perror("ERROR");
		exit(1);
	}

		wait(&status);

}

