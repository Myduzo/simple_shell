#include "shellib.h"
/**
 * _env - prints environment variables
 * @env: env variables
 * Return: 1.
 */
int _env(char *buff)
{
int x = 0;
if (_strcmp(buff, "env") == 0)
{
while (environ[x])
{
printf("%s\n", environ[x]);
x++;
}
}
return (1);
}
