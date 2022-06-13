#include "main.h"

int ex_check(char *s)
{
	int i;
	char *str = "exit";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != str[i])
			return (0);
		if(str[i + 1] == '\0' && s[i + 1] == '\0')
			return (1);
	}
	return (0);
}
