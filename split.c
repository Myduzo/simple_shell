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
	char *copy;
	char **ch;
	int i = 0;

	if (st == NULL)
	return (NULL);
	l = strlen(st);

	copy = malloc(l * sizeof(char *) + 1);
	ch = malloc(l * sizeof(char *) + 2);

	strcpy(copy, st);

	str = strtok(copy, dec);
	while (str != NULL)
	{
		ch[i] = malloc(_strlen(str) * sizeof(char) + 1);
		_strcpy(ch[i], str);
		str = strtok(NULL, dec);
		i++;

	}
free(str);
free(copy);
return (ch);
}
