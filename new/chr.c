#include "main.h"


char chg(char *s)
{
	if (strcmp("+", s) == 0)
		return ('+');
	if (strcmp("x", s) == 0)
		return ('x');
	if (strcmp("/", s) == 0)
		return ('/');
	return ('-');
}
