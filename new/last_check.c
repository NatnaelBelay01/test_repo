#include "main.h"

int check(list_t **head)
{
	list_t *new, *temp1, *temp2;

	if ((*head)->next != NULL)
	{
		temp1 = *head;
		temp2 = temp1->next;
		while (temp2 != NULL)
		{
			new = malloc(sizeof(list_t));
			temp1->next = new;
			new->next = temp2;
			new->value = strdup("+");
			temp1 = temp2;
			temp2 = temp2->next;
		}
		return (-1);
	}
	return (0);
}
