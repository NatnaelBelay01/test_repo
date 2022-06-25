#include "main.h"

list_t *restruct(list_t **head, int count)
{
	list_t *temp = *head, *temp1, *fr1, *fr2;
	while (count > 0)
	{
		temp = temp->next;
		count--;
	}
	temp1 = temp;
	fr1 = temp->next;
	fr2 = temp->next->next;
	temp = temp->next->next->next;
	if(temp == NULL)
	{
		temp1->next = NULL;
		free(fr1->value);
		free(fr1);
		free(fr2->value);
		free(fr2);
		return (*head);
	}
	temp1->next = temp;
	free(fr1->value);
	free(fr1);
	free(fr2->value);
	free(fr2);
	return (*head);
}
