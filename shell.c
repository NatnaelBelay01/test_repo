#include "main.h"

int main(void)
{
	char *av[100], *str = NULL;
	extern char **environ;
	size_t strlen;
	ssize_t linelen;
	int status = 0;
	pid_t child;

	while (1)
	{
		if (child != 0 || status == 0)
		{
			write(1, "($) ", 4);
			status = 1;
		}
		linelen = getline(&str, &strlen, stdin);
		if (str[0] == '\n')
		{
			status = 0;
			continue;
		}
		if (linelen == -1)
			break;
		str[linelen - 1] = '\0';
		if (ex_check(str) == 1)
		{
			free(str);
			exit (0);
		}
		str = edit(str);
		parser(str, av);
		child = fork();
		if (child == 0)
		{
			if (execve(av[0], av, environ) == -1)
			{
				perror("./shell:");
				break;
			}
		}
		else
			wait(0);
	}
	free(str);
	return (0);
}
