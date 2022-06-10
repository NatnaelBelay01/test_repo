#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>


int main(int ac, char **av)
{
	char *dir;
	unsigned int i = 1;
	struct stat st;
	if (ac < 2)
	{
		printf("Usage: %s <file>\n", av[0]);
		return (1);
	}
	while (av[i])
	{
		dir = malloc(sizeof(av[i]) + 3);
		strcat(dir, "./");
		strcat(dir, av[i]);
		printf("%s: ", av[i]);
		if (stat(dir, &st) == 0)
			printf("FOUND\n");
		else
			printf("NOT FOUND\n");
		i++;
		free(dir);
	}
	return  (0);
}
