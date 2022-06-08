#include "main.h"


char *edit(char *str)
{
	int i, status = 0;
	char *s = "/bin/" , *temp;

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
		temp = malloc(sizeof(str) + 5);
		strcat(temp, s);
		strcat(temp, str);
		str = temp;
		temp = NULL;
	}
	return (str);
}
