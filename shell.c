#include "main.h"
/**
 * main - the main fucntion
 * Return: always 0
 */
int main(void)
{
	char *av[100], *str = NULL;
	int status = 0, len = 0;
	pid_t child;

	while (1)
	{
		if (child != 0 || status == 0)
		{
			write(1, "($) ", 4);
			status = 1;
		}
		len = input(&str);
		if (len == -1)
			break;
		if (str[0] == '\n')
		{
			status = 0;
			continue;
		}
		str[len - 1] = '\0';
		if (ex_check(str) == 1)
			break;
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
