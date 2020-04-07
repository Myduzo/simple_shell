#include "shellib.h"

/**
*
*
*
*/
int main()
{
char* buff;
char *av[] = {"/bin/ls", NULL};
size_t bufsize = 30;
int len = 0;
pid_t child = fork();

if (child == -1)
	exit(-1);

if (child != 0)
{
	printf("I'm the father %d, my child is %d\n", getpid(), child);
	wait(NULL);
}
else
{
	printf("I'm the child %d, my father is %d\n", getpid(), getppid());

	buff = (char *)malloc(bufsize * sizeof(char));
		if (!buff)
			exit(1);

	while (len != EOF)
	{
		write(1, "#cisfun$ ", 9);
		len = getline(&buff, &bufsize, stdin);
		execve(av[0], av, NULL);
		write(1, buff, len);
	}
}
return (0);
}
