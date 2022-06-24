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
		while (temp->next != NULL)
		{
			if (atoi(temp->next->value) == atoi(oprns[i]))
			{
				printf("\tbefore fun_sel\n");
				print_list(*head);
				fun_sel(head, oprns[i], count);
				printf("\tafter fun_sel\n");
				print_list(*head);
				restruct(head, count);
				printf("\tafter restruct\n");
				print_list(*head);
			}
			temp = temp->next;
			count++;
		}
	}
	return (0);
}
