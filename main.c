#include "shellib.h"
/**
* main - main program.
* Return: 0 always.
*/
int main()
{
char* buff;
//char* str;
size_t bufsize = 30;
int len = 0; // i = 0, j = 0;
//char *ch[i];

buff = (char *)malloc(bufsize * sizeof(char));
	if (!buff)
		exit(1);

while (len != EOF)
{
write(1, "$:> ",4);
len = getline(&buff, &bufsize,stdin);
buff[len-1] = '\0';
exec(buff);
}

free(buff);
return (0);
}