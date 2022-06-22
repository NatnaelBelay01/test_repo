#include "main.h"

int oprtor(list_t **head)
{
	list_t *temp;
	int i, count;
	char *oprns[] = {"/", "*", "+", "-", NULL};

	for (i = 0; oprns[i] != NULL; i++)
	{
		count = 0;
		temp = *head;
		while (temp->next ! NULL)
		{
			if (temp->next->value == oprns[i])
			{
				fun_sel(head, oprns[i], count);
				restruct(head, count);
			}
			temp = temp->next;
			count++;
		}
	}
	return (0);
}
