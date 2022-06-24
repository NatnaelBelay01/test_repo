#include "main.h"

list_t *restruct(list_t **head, int count)
{
	list_t *temp = *head, *temp1;
	while (count > 0)
	{
		temp = temp->next;
		count--;
	}
	temp1 = temp;
	temp = temp->next->next->next;
	if(temp == NULL)
	{
		temp1->next = NULL;
		return (*head);
	}
	temp1->next = temp;
	return (*head);
}
