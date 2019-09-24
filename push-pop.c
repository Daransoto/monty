#include "monty.h"
void push_s(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	printf("Push stack\n");
}
void push_q(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	printf("Push queue\n");
}
void pop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
	printf("Pop\n");
}
void error_mes(char *mess, char *arg)
{
	fprintf(stderr, "%s%s\n", mess, arg);
	exit(EXIT_FAILURE);
}
