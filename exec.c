#include "shellib.h"
void exec(char* st)
{
	char **ch = sp(st, " ");
	char* str;
	int len = 0, i = 0, j;

	int status;
	
	pid_t id;
	id = fork();
	
	if (id == -1)
	{
		perror("Error");
		exit(1);
	}
	//char **ch = sp(st);
	
	if (id == 0)
	{
		execve(ch[0], ch, NULL);
		perror("ERROR");
		exit(EXIT_FAILURE);
		
	}

		wait(&status);
	
	

}
