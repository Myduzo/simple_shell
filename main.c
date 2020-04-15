#include "shellib.h"
/**
* main - main program
* Return: 0.
*/
int main(void)
{
int len = 0;
char *buff;
size_t bufsize = 30;
buff = (char *)malloc(bufsize * sizeof(char));
	if (!buff)
	exit(1);
while (len != EOF)
{
if (isatty(STDIN_FILENO))
write(1, "$:> ", 4);
len = getline(&buff, &bufsize, stdin);
if (len == 1)
{
	if (isatty(STDIN_FILENO))
	continue;
	exit(0);
}
buff[len - 1] = '\0';
if (len > 1)
{
	exec(buff);
}
}
free(buff);
return (0);
}

