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
	if (ch == NULL)
	free(ch);
	s = getenv("PATH");
	if (s == NULL)
	free(s);
	strp = sp(s, ":");
	if (strp == NULL)
	_free(strp);
	chp = _path(strp, ch[0]);
	if (chp == NULL)
	free(chp);
	if (id == 0)
	{
		if (execve(chp, ch, NULL) == -1)
		{
			execve(ch[0], ch, NULL);
			free(chp);
		}
		free(s);
		_free(strp);
		free(chp);
		perror("ERROR");
		exit(EXIT_FAILURE);
	}
		free(chp);
		wait(&status);
}
