#include "main.h"

int main(int ac, char **av)
{
	int n;
	int i = 0;
	list_t hello = {"5", NULL};
	list_t *head = &hello, *temp;
	temp = malloc(sizeof(list_t));
	temp->value = strdup("+");
	temp->next = head;
	head = temp;
	temp = malloc(sizeof(list_t));
	temp->value = strdup("5");
	temp->next = head;
	head = temp;
	printf("______BEFORE OPERATION______\n");
	oprtor(&head);
	printf("______AFTER OPERATION_______\n");
	print_list(head);
	return (0);
}
