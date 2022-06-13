#include "main.h"
/**
 * _strlen - a function taht returns the length of a string
 * @s: the string to be measured
 * Return: alwyas 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
