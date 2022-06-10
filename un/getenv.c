#include "main.h"


char *_getenv(const char *name)
{
	extern char **environ;
	int i, j, k = 0;
	char *s;

	for (i = 0; environ[i] != NULL; i++)
	{
		for (j = 0; environ[i][j] != '\0'; j++)
		{
			if(name[j] != environ[i][j])
				break;
			if(name[j + 1] == '\0' && environ[i][j + 1] != '=')
				break;
			if(name[j + 1] == '\0')
			{
				j += 2;
				k = j;
				while (environ[i][k] != 0)
				{
					k++;
				}
				s = malloc(sizeof(char) * k + 1);
				if (s == NULL)
				{
					printf("Not enough memory");
					exit(97);
				}
				k = 0;
				while (environ[i][j] != '\0')
				{
					s[k] = environ[i][j];
					k++;
					j++;
				}
				s[k] = '\0';
				return (s);
			}
		}	
	}
	return (NULL);
}
