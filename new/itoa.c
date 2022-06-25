#include "main.h"

char *itoa(int n)
{
	int i, j = 0, chek = 0;
	char *s;

	if (n < 0)
	{
		n = -1 * n;
		chek = 1;
	}
	for (i = n ; i > 0; i = i / 10)
		j++;
	if (n == 0)
	{
		s = malloc(sizeof(char) * 2);
		s[1] = '\0';
		s[0] = 48;
	}
	else
	{
		if (chek == 1)
		{
			i = n;
			s = malloc(sizeof(char) * (j + 2));
			s[j + 1] = '\0';
			s[0] = '-';
			while (j > 0)
			{
				s[j] = 48 + (i % 10);
				i = i / 10;
				j--;
			}
			return (s);
		}
		s = malloc(sizeof(char) * (j + 1));
		s[j] = '\0';
		while (j > 0)
		{
			s[j - 1] = 48 + (n % 10);
			n = n / 10;
			j--;
		}
	}
	return (s);
}
