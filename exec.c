#include "shellib.h"
void exec(char* st)
{
<<<<<<< HEAD
	char **ch = sp(st, " ");
=======
	char* str;
	int len = 0, i = 0, j;
>>>>>>> 7174e604b0a3344b231a55afa5cbfd0e76c8cfc0
	int status;
	
	pid_t id;
	id = fork();
	
	if (id == -1)
	{
		perror("Error");
		exit(1);
	}
	char **ch = sp(st);
	
	if (id == 0)
	{
		execve(ch[0], ch, NULL);
		perror("ERROR");
		exit(EXIT_FAILURE);
		
	}

		wait(&status);
	
	

}
