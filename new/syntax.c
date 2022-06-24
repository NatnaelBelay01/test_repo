#include "main.h"

int syntax(char *arg[], int len)
{
  int i, j, k;
  char *oprns[] = {"+", "-", "*", "/", NULL};
  for (i = 0; oprns[i] != NULL; i++)
    {
      if (atoi(arg[len - 1]) == atoi(oprns[i]))
	return (-1);
    }
  for (i = 0; arg[i] != NULL; i++)
    {
      for (j = 0; oprns[j] != NULL; j++)
	{
	  if (atoi(oprns[j]) == atoi(arg[i]))
	    {
	      for (k = 0; oprns[k] != NULL; k++)
		{
		  if (atoi(arg[i + 1]) == atoi(oprns[k]))
		    return (-1);
		}
	    }
	}
    }
  return (0);
}
