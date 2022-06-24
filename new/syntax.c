#include "main.h"

int syntax(char *arg[], int len)
{
  int i, j, k;
  char *oprns[] = {"+", "-", "x", "/", NULL};
  for (i = 0; oprns[i] != NULL; i++)
    {
      if (strcmp(arg[len - 1], oprns[i]) == 0)
	return (-1);
    }
  for (i = 0; arg[i] != NULL; i++)
    {
      for (j = 0; oprns[j] != NULL; j++)
	{
	  if (strcmp(oprns[j], arg[i]) == 0)
	    {
	      for (k = 0; oprns[k] != NULL; k++)
		{
		  if (strcmp(arg[i + 1], oprns[k]) == 0)
		    return (-1);
		}
	    }
	}
    }
  return (0);
}
