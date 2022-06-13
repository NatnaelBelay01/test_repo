#include "main.h"
/**
 * edit - a function that edits input
 * @str: the string to be edited
 * Return: a pointer to the edited string
 */

char *edit(char *str)
{
	int i, status = 0;
	char *s = "/bin/", *temp;

	for (i = 0; i < 5; i++)
	{
		if (s[i] != str[i])
		{
			status = 1;
			break;
		}
	}

	if (status == 1)
	{
		temp = malloc(sizeof(_strlen(str)) + 5);
		_strcat(temp, s);
		_strcat(temp, str);
		free(str);
		str = temp;
		temp = NULL;
	}
	return (str);
}
