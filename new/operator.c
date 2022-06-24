#include "main.h"

int oprtor(list_t **head)
{
	list_t *temp;
	int i, count;
	char *oprns[] = {"/", "x", "+", "-", NULL};

	for (i = 0; oprns[i] != NULL; i++)
	{
		count = 0;
		temp = *head;
		while (temp->next != NULL)
		{
			if (strcmp(temp->next->value, oprns[i]) == 0)
			{
				while (temp->next != NULL && strcmp(temp->next->value, oprns[i]) == 0)
				{
					fun_sel(head, temp->next->value, count);
					restruct(head, count);
				}
				if (temp->next == NULL)
					break;
			}
			temp = temp->next;
			count++;
		}
	}
	return (0);
}
