#include "main.h"

int syntax(char *arg[], int len)
{
  int i, j, k;
  char *oprns[] = {"+", "-", "*", "/", NULL};
  for (i = 0; oprns[i] != NULL; i++)
    {
      if (arg[len - 1] == oprns[i])
	return (-1);
    }
  for (i = 0; arg[i] != NULL; i++)
    {
      for (j = 0; oprns[j] != NULL; j++)
	{
	  if (oprns[j] == arg[i])
	    {
	      for (k = 0; oprns[k] != NULL; k++)
		{
		  if (arg[i + 1] == oprns[k])
		    return (-1);
		}
	    }
	}
    }
  return (0);
}
