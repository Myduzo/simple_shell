#include "shellib.h"

/**
*
*
*
*/
char **_position(char *name)
{
	char *path = getenv("PATH");
	char *pa = strdup(path);
	char **ch = sp(char* st);
	char *command;
	struct stat st;
	int i = 0;

	if (stat(name, &st) == 0)
		return (name);
	
	while (ch[i])
	{
		command = strcat(ch[i], name);
		if (stat(command, &st) == 0)
			break;
		i++;
	}
	
	free(ch);
	return (command);
}
