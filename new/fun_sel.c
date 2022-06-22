#include "main.h"

int fun_sel(list_t **head, char *oprn, int count)
{
	list_t temp;

	switch (oprn)
	{
		case "\":
			temp = nvgt(head, count);
			temp->value = (char *)(atoi(temp->value) \ atoi(temp->next->next->value));
			break;
		case "*":
			temp = nvgt(head, count);
			temp->value = (char *)(atoi(temp->value) * atoi(temp->next->next->value));
			break;
		case "+":
			temp = nvgt(head, count);
			temp->value = (char *)(atoi(temp->value) + atoi(temp->next->next->value));
			break;
		default:
			temp = nvgt(head, count);
			temp->value = (char *)(atoi(temp->value) - atoi(temp->next->next->value));
			break;
	}
	return (0);
}
