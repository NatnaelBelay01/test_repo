#include "main.h"

int fun_sel(list_t **head, char *oprn, int count)
{
	list_t *temp;
	char c;
	int result;

	c = chg(oprn);
	switch (c)
	{
		case ('/'):
			temp = nvgt(head, count);
			result = atoi(temp->value) / atoi(temp->next->next->value);
			temp->value = itoa(result);
			break;
		case ('*'):
			temp = nvgt(head, count);
			result = atoi(temp->value) * atoi(temp->next->next->value);
			temp->value = itoa(result);
			break;
		case ('+'):
			temp = nvgt(head, count);
			result = atoi(temp->value) + atoi(temp->next->next->value);	
			temp->value = itoa(result);
			break;
		default:
			temp = nvgt(head, count);
			result = atoi(temp->value) - atoi(temp->next->next->value);
			temp->value = itoa(result);
			break;
	}
	return (0);
}
