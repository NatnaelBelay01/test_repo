#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct list_s
{
	char *value;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
list_t *add_node(list_t **head, char *data[], int ac);
int fun_sel(list_t **head, char *oprn, int count);
list_t *nvgt(list_t **head, int count);
int oprtor(list_t **head);
list_t *restruct(list_t **head, int count);
int syntax(char *arg[], int len);
char chg(char *s);
char *itoa(int n);
#endif
