#include "main.h"
/**
 * parser - a function that parses a string
 * @str: the string to be parsed
 * @av: an array of strings that holds the tokens
 * Return: a pointer to the array of strings
 */

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
