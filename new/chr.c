#include "main.h"


char chg(char *s)
{
	if (strcmp("+", s) == 0)
		return ('+');
	if (strcmp("*", s) == 0)
		return ('*');
	if (strcmp("/", s) == 0)
		return ('/');
	return ('-');
}
