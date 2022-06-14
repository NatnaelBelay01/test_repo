#include "main.h"
/**
 * input - a function that accepts input from the user
 * @str: a pointer to the memory location to store input
 * Return: the number of characters if success or -1
 */

int input(char **str)
{
	ssize_t linelen;
	size_t strlen;

	linelen = getline(str, &strlen, stdin);
	return (linelen);
}
