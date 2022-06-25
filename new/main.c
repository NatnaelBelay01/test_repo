#include "main.h"

int main(int ac, char **av)
{
	list_t *head = NULL;

	if (syntax(av, ac) == -1)
	{
		printf("syntax error\n");
		exit (-1);
	}
	add_node(&head, av, ac);
	oprtor(&head);
	if (check(&head) == -1)
		oprtor(&head);
	print_list(head);
	return (0);
}
