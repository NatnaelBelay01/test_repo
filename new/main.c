#include "main.h"

int main(void)
{
	list_t *head = NULL;
	size_t n;
	char *ac[] = {"A", "B", NULL};
	add_node(&head, ac, 3);

	n = print_list(head);
	return (0);
}
