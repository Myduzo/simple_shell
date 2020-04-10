#include "shellib.h"

/**
*
*
*
*/
char **_path (char **p, char *str)
{
	struct stat st;
	int i = 0;
	char *chp = malloc(sizeof(char *));
	char **ch = malloc(sizeof(char *));
	while (p[i] != NULL)
	{
		
		chp = _strdup(p[i]);
		chp = strcat(chp, "/");
		chp = strcat(chp,str);
		if (stat(chp, &st) == 0)
		{
			*ch = _strdup(chp);       	
			break;
    	}
    	
		i++;
	}

	return (ch);
}
