#include "main.h"
/**
 * print_list - a fucntion that prints the elements of a list
 * @h: a pointer to the list
 * Return: the number of elements
 */
size_t print_list(const list_t *h)
{
	size_t elem = 0;

	while (h)
	{
		printf("%s\n",h->value);
		h = h->next;
		elem++;
	}
	return (elem);
}
