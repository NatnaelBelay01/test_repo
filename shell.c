#include "main.h"

int main(void)
{
	int i = 1;
	char *av[100], *str = NULL;
	extern char **environ;
	size_t strlen = 0;
	ssize_t linelen;
	pid_t child;

	while (i)
	{
		printf("#Cisfun$ ");
		linelen = getline(&str, &strlen, stdin);
		if(str[0] == '\n')
			continue;
		if(linelen == -1)
		{
			printf("\n");
			exit(1);
		}
		str[linelen - 1] = '\0';
		str = edit(str);
		parser(str, av);
		child = fork();
		if (child == 0)
		{
			if (execve(av[0], av, environ) == -1)
				perror("./shell");
		}
		else
			wait(0);
	}
	free(str);
	return (0);
}
