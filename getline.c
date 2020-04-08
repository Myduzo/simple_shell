#include "shellib.h"

/**
*
*
*
*/
int main()
{
char* buff;
size_t bufsize = 30;
int len = 0;

buff = (char *)malloc(bufsize * sizeof(char));
	if (!buff)
		exit(1);
while (len != EOF)
{
write(1, "#cisfun$ ", 9);

len = getline(&buff, &bufsize,stdin);
buff[len-1] = '\0';
exec(buff);
}
free(buff);
return (0);
}
