#include "shellib.h"
char **sp(char* st)
{
	char *str;
	char *copy;
	int l = 0, i = 0;
	l = strlen(st);

	char **ch = malloc(l * sizeof(char *));
	
	copy = strdup(st);
	
	str = strtok(copy, " ");
	while (str != NULL)
	{
		ch[i] = strdup(str);
		str = strtok(NULL, " ");
		i++;
	}

return(ch);
}
/*
int main()
{
	int i =0;
	char *str = "ls -l";
	char **av = sp(str);
while (av[i] != NULL)
{
	printf("%s\n", av[i]);
	i++;
}
return 0;
}
*/