#include "shellib.h"

/**
*
*
*
*/
int main()
{
char *buff;
size_t bufsize = 30, len;

buff = (char *)malloc(bufsize * sizeof(char));
	if (!buff)
		exit(1);

write(1, "#cisfun$ ", 9);
len = getline(&buff, &bufsize, stdin);
write(1, buff, len);

return (0);
}