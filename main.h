#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
extern char **environ;
char *_getenv(const char *name);
int parser(char str[], char *av[]);
char *edit(char *str);
int ex_check(char *s);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
int input(char **str);
#endif
