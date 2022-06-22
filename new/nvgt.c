#include "main.h"

list_t *nvgt(list_t **head, int count)
{
	list_t *temp = *head;
	while (count > 0)
	{
		temp = temp->next;
		count--;
	}
	return (temp);
}
