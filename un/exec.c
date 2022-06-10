#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *argv[] = {"/prac/b", NULL};

	printf("before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("error:");
	}
	printf("after execve\n");
	return (0);
}
