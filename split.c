#include "shellib.h"
char *sp(char* st)
{
	char *str;
	char *copy, *chcopy;
	int l = 0 , j, i = 1;
	char **ch = malloc(l * sizeof(char));

	l = strlen(st);
	
	st = (char *)malloc(l * sizeof(char));
				if (!st)
					return(NULL);
	copy = strdup(st);
	if (copy == NULL)
	{
	return(NULL);
	}
			str = strtok(copy, " ");
		for (j = 0; ch[j]; j++)
		{
			while (str != NULL)
			{
				ch[j + i] = str;
				str = strtok(NULL, " ");
				i++;
				ch[0] = "/usr/bin/";
			}
			chcopy = strdup(ch[j]);
		}

return(chcopy);
}