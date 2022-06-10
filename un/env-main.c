#include <stdio.h>
#include <stdlib.h>


int main(__attribute__((unused)) int ac, __attribute__((unused)) char **av, char **env)
{
	unsigned int i = 0;

	while (env[i] != NULL)
	{
		printf("%s\n", env[i]);
			i++;
	}
	return (0);
}
