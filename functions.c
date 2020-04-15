#include "shellib.h"
/**
 * _strlen - string length
 * @s : string
 * Return: Always 0.
 */
size_t _strlen(const char *s)
{
size_t len = 0;
while (*s++)
len++;

return (len);
}



#include "shellib.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup- creates an array of chars
 * @str: string
 * Return: Nothing.
 */
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}


/**
 * _strcat - string concatenate
 * @dest : first string
 * @src : second string
 * Return: string.
 */
char *_strcat(char *dest, char *src)
{
int i = 0, j = 0, len1 = 0, len2 = 0;
len1 = _strlen(dest);
len2 = _strlen(src);
len1 = len1 + len2 + 1;
char *res;
res = malloc(len1 *sizeof(char));
if (!res)
return (NULL);
while (dest[i] != '\0')
{
res[i] = dest[i];
i++;
}
while (src[j] != '\0')
{
res[i + j] = src[j];
j++;
}
res[len1 - 1] = '\0';
return (res);
}
/**
 * _strcpy - string copy
 * @dest : first string
 * @src : second string
 * Return: string.
 */
char *_strcpy(char *dest, char *src)
{
int i, j = 0;
while (src[j] != '\0')
j++;
for (i = 0; i <= j; i++)
{
dest[i] = src[i];
}
return (dest);
}


