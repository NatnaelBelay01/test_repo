#include "main.h"

int main(void)
{
	char *av[100], *str = NULL;
	extern char **environ;
	size_t strlen;
	ssize_t linelen;
	pid_t child;

	while (1)
	{
		printf("($) ");
		linelen = getline(&str, &strlen, stdin);
		if (str[0] == '\n')
			continue;
		if (linelen == -1)
			break;
		str[linelen - 1] = '\0';
		str = edit(str);
		parser(str, av);
		child = fork();
		if (child == 0)
		{
			if (execve(av[0], av, environ) == -1)
			{
				perror("./shell");
				break;
			}
		}
		else
			wait(0);
	}
	free(str);
	return (0);
}
