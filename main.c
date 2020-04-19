#include "shellib.h"
/**
* main - main program
* Return: 0.
*/
int main(void)
{
	int len = 0;
	char *buff = NULL, **test = NULL;
	size_t bufsize = 30;

	buff = (char *)malloc(bufsize * sizeof(char));
	if (!buff)
	{
	free(buff);
	exit(1);
	}
	signal(SIGINT, _ctrlc);
	while (len != EOF)
	{
		_prout();
		if (len == -1)
			free(buff);
		/*
		if (strcmp(buff, "env") == 0)
		_env(buff);
		*/
		len = getline(&buff, &bufsize, stdin);
		if (len <= 1)
		{
			if (isatty(STDIN_FILENO))
				continue;
			exit(0);
		}
		test = sp(buff, " /\n\t");
		if (test[0] == NULL)
		{
			_free(test);
			continue;
		}
		buff[len - 1] = '\0';
		/*
		_ex(buff);
		*/
		if (len > 1 && buff != NULL)
		exec(buff);
	}
return (0);
}
