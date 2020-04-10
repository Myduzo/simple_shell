#include "shellib.h"
char **sp(char* st, char *dec)
{
	char *str;
	char *copy;
	int l = 0, i = 0;
	l = _strlen(st);

	char **ch = malloc(l * sizeof(char *));
	
	copy = _strdup(st);
	
	str = _strtok(copy, dec);
	while (str != NULL)
	{
		ch[i] = _strdup(str);
		str = _strtok(NULL, dec);
		i++;
	}

return(ch);
}
