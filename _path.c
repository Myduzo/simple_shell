#include "shellib.h"
/**
* _path - find path
* @p: char
* @str: string
* Return: string
*/
char *_path(char **p, char *str)
{
	struct stat st;
	unsigned int i = 0;

	if (p == NULL)
	{
		return (NULL);
	}
		for (; p[i] != NULL; i++)
	{
		p[i] = _strcat(p[i], "/");
		p[i] = _strcat(p[i], str);
		if (stat(p[i], &st) == 0)
		{
			return (p[i]);
			free(p[i]);
		}
	}
	return (NULL);
}
