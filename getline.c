#include "shellib.h"

/**
*
*
*
*/
int main()
{
char* buff;
//char* str;
size_t bufsize = 30;
int len = 0;// i = 0;
//char *ch[len];

buff = (char *)malloc(bufsize * sizeof(char));
	if (!buff)
		exit(1);
while (len != EOF)
{
write(1, "#cisfun$ ", 9);
len = getline(&buff, &bufsize, stdin);
write(1, buff, len);

/*
str = strtok(buff, " ");

while (str != NULL)
{
ch[i] = str;
str = strtok(NULL, " ");
i++;
exec(ch[i]);
}
*/
}
return (0);
}