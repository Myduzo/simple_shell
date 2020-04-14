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


/**
 * _strdup - string duplication
 * @s : string
 * Return: string.
 */
char *_strdup(const char *s)
{
int x = 0, y = 0;
char *str;

if (!s)
	return (NULL);

while (s[x] != '\0')
	x++;

str = malloc(sizeof(char) * x + 1);
	if (!str)
		return (NULL);

while (y < x)
{
	str[y] = s[y];
	y++;
}
return (str);
}


/**
 * _strcat - string concatenate
 * @dest : first string
 * @src : second string
 * Return: string.
 */
char *_strcat(char *dest, const char *src)
{
int x = 0, y = 0, z = 0, p = 0;
char *str;

if (!dest && !src)
	return (NULL);

while (dest[x] != '\0')
	x++;

while (src[y] != '\0')
	y++;

str = malloc(sizeof(char) * (x + y + 1));
if (!str)
	return (NULL);

while (z < x)
{
	str[z] = dest[z];
	z++;
}

while (p < y)
{
	str[z] = src[p];
	z++;
	p++;
}
return (str);
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
