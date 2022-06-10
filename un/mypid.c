#include <unistd.h>
#include <stdio.h>

int main(void)
{
	pid_t my;
	my = getpid();
	printf("%u\n", my);
	return (0);
}
