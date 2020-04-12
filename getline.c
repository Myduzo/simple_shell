#include "shellib.h"

/**
*
*
*
*/
extern char **environ;
int main()
{
int i = 0;
char* buff;
size_t bufsize = 30;
int len = 0;

buff = (char *)malloc(bufsize * sizeof(char));
	if (!buff)
		exit(1);
while (len != EOF)
{
if (isatty (STDIN_FILENO))
write(1, "$:> ",4);

len = getline(&buff, &bufsize,stdin);
if (len == 1)
{
	if (isatty (STDIN_FILENO))
	continue;
	exit(0);
}

buff[len-1] = '\0';
if(strcmp(buff,"exit") == 0 )
	{
		exit(0);
	}

if(strcmp(buff,"env") == 0 )
{	
	while (environ[i] != NULL)
	{
		printf("%s\n",environ[i]);
		i++;
		
	}

}


exec(buff);
}
free(buff);
return (0);
}