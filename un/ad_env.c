#include <stdio.h>


int main(__attribute__((unused)) int ac, __attribute__((unused)) char **av, char **env)
{
	extern char **environ;
	printf("Address of environ: %p\n", &environ);
	printf("Address of env: %p\n", &env);
	return (0);
}
