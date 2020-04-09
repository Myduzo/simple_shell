#include "shellib.h"
void exec(char* st)
{
	char* str;
	int len = 0, i = 0, j, o= 0;
	int status;
	
	pid_t id;
	id = fork();
	
	if (id == -1)
	{
		perror("Error");
		exit(1);
	}
	char **ch = sp(st, " ");
	char *s = getenv("PATH");
	char **strp = sp(s, ":");
	char **chp = _path(strp,ch[0]);
	//printf("%s\n",*chp);
	
	if (id == 0)
	{
		execve(chp[0], ch, NULL);
		perror("ERROR");
		exit(EXIT_FAILURE);
		
	}

		wait(&status);
	
	

}
