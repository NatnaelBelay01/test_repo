#include <stdlib.h>
#include <stdio.h>

int main(void)
{
  size_t len = 0;
  ssize_t linelen;
  char *line = NULL;
  printf("$ ");
  linelen = getline(&line, &len, stdin);
  if (linelen < 0)
  {
	  printf("An Error has occuered");
	  exit (98);
  }
  line[linelen - 1] = '\0';
  printf("%s\n",line);
  return (0);
}
