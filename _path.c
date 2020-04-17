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
	char *chp;

	if(p == NULL)
	{
		return(NULL);
	}
		for (; p[i] != NULL; i++)
	{
		chp = _strcat(p[i], "/");
		chp = _strcat(chp, str);
	
		if (stat(chp, &st) == 0)
		{
			return (chp);
		}
	}
	return (NULL);
}
