#include "shellib.h"
void exec(char* st, int num)
{
	char **ch = sp(st);
	int status;
	
	pid_t id;
	id = fork();
	
	if (id == -1)
	{
		perror("Error");
		exit(1);
	}
	
	if (id == 0)
	{
		execve(ch[0], ch, NULL);
		perror("ERROR");
		exit(EXIT_FAILURE);		
	}

		wait(&status);
}
