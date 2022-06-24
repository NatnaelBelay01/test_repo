#include "main.h"

list_t *add_node(list_t **head, char *data[], int ac)
{
  int i = 1;
  list_t *node , *temp;

  if (data == NULL)
    return (NULL);
  while (ac > 0 && data[i] != NULL)
    {
      node = malloc(sizeof(list_t));
      if (node == NULL)
	return (NULL);
      node->value = strdup(data[i]);
      i++;
      node->next = NULL;
      if (*head == NULL)
	{
	  *head = node;
	  ac--;
	  continue;
	}
      temp = *head;
      while (temp->next != NULL)
	{
	  temp = temp->next;
	}
      temp->next = node;
      ac--;
    }
  return (*head);
}
