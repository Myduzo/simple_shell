#include "shellib.h"
void exec(char* st, int num)
{
	char* str;
	int len = 0, i = 1, j;
	char **ch;
	int status;
	
	pid_t id;
	id = fork();
	if (id == -1)
	{
		perror("Error");
		exit(1);
	}
	*ch = sp(st);
	//printf("%s", ch);
	if (id == 0)
	{
		if (execve("/bin/pwd", ch, NULL) == -1)
		perror("ERROR");
		exit(EXIT_FAILURE);
		
	}

		wait(&status);
	
	

}