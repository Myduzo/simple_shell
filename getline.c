#include "shellib.h"

/**
*
*
*
*/
int main()
{
char* buff;
char* str;
size_t bufsize = 30;
int len = 0, i = 0, j = 0;
char *ch[i];

buff = (char *)malloc(bufsize * sizeof(char));
	if (!buff)
		exit(1);
while (len != EOF)
{
write(1, "#cisfun$ ", 9);

len = getline(&buff, &bufsize-1,stdin);

exec(buff, len-1);
}
free(buff);
return (0);
}
