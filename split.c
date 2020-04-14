#include "shellib.h"
/**
* sp - split function.
* @st : first string
* @dec : delims
* Return: splited string
*/
char **sp(char *st, char *dec)
{
	char *str;
	size_t l;
	int i = 0;

	if (st == NULL)
	return (NULL);
	l = strlen(st);
	char *copy = malloc(sizeof(char *) * l);

	char **ch = malloc(l * sizeof(char *) * 2);

	strcpy(copy, st);

	str = strtok(copy, dec);
	ch[0] = _strdup(str);
	while (str != NULL)
	{
		ch[i] = _strdup(str);
		str = strtok(NULL, dec);
		i++;
	}
free(str);
free(copy);
return (ch);
}
