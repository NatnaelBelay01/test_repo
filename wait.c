#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>

int main(void)
{
	pid_t child;
	int status;

	child = fork();
	if (child == -1)
	{
		perror("Error:");
		return (1);
	}
	if (child == 0)
	{
		printf("wait for me, wait for me\n");
		sleep(3);
	}
	else
	{
		wait(&status);
		printf("oh, it's all better now\n");
	}
	return (0);
}
