#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
	int status, i = 1;
	char *av[2];
	char *str;
	size_t strlen = 0;
	ssize_t linelen;
	pid_t child;

	while (i)
	{
		printf("#Cisfun$ ");
		linelen = getline(&str, &strlen, stdin);
		if (linelen < 0)
		{
			perror("Error");
		}
		str[linelen - 1] = '\0';
		av[0] = str;
		av[1] = NULL;
		child = fork();
		if (child == 0)
		{
			if (execve(av[0], av, NULL) == -1)
			{
			perror("Error:");
			}
		}
		else
		{
			wait(&status);
		}
	}
	return (0);
}
