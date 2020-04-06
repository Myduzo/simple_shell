#include "shellib.h"

/**
*
*
*
*/
int main()
{
char *buff;
char my_str;
size_t bufsize = 10;

buff = (char *)malloc(bufsize * sizeof(char));
	if (!buff)
		exit(1);

write(1,"$ ", 2);
my_str = getline(&buff, &bufsize, stdin);
write(1, buff,my_str);
return (0);
}