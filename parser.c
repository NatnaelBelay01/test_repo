#include "main.h"


int parser(char str[], char *av[])
{
	int i = 0;

	av[0] = strtok(str, " ");
	while (av[i] != NULL)
	{
		i++;
		av[i] = strtok(NULL, " ");
	}
	return (i);
}
