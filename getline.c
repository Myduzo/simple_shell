#include "shellib.h"

/**
*
*
*
*/
int main()
{
char *buff;
size_t bufsize = 10;

buff = (char *)malloc(bufsize * sizeof(char));
	if (!buff)
		exit(1);

write(1,"$ ", 2);
getline(&buff, &bufsize, stdin);
//write(1, buff, my_strlen(buff));
printf("%s\n", buff);
return (0);
}