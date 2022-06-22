#include "main.h"

int *restruct(list_t **head, int count)
{
	list_t *temp = *head, *temp1;
	while (count > 0)
	{
		temp =temp->next;
		count--;
	}
	temp1 = temp;
	temp = temp->next->next->next;
	temp1->next = temp;
	return (*head);
}
