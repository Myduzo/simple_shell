#include "shellib.h"
char **sp(char* st, char *dec)
{
	char *str;
	char *copy;
	int l = 0, i = 0;
	l = strlen(st);

	char **ch = malloc(l * sizeof(char *));
	
	copy = strdup(st);
	
	str = strtok(copy, dec);
	while (str != NULL)
	{
		ch[i] = strdup(str);
		str = strtok(NULL, dec);
		i++;
	}

return(ch);
}
