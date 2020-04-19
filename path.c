#include "shellib.h"
/**
* _path - find path
* @str: string
* Return: string
*/
char *_path(char **str)
{
struct stat st;
unsigned int i = 0;
char *s = NULL;
char **strp = NULL, *path = NULL;

s = getenv("PATH");
if (s == NULL)
return (NULL);
strp = sp(s, ":");
if (strp == NULL)
{
return (NULL);
}
for (; strp[i] != NULL; i++)
{
strp[i] = _strcat(strp[i], "/");
strp[i] = _strcat(strp[i], str[0]);
if (stat(strp[i], &st) == 0)
{
path = _strdup(strp[i]);
return (path);
}
free(strp[i]);
}
return (NULL);
}
