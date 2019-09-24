#include "monty.h"
void push_s(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	char *arg, message[100];

	if (!stack)
		error_mes("No stack present.", "");
	new = malloc(sizeof(stack_t));
	if (!new)
		error_mes("Error: malloc failed", "");
	arg = strtok(NULL, " ");
	sprintf(message, "L%d: usage: push integer", line_number);
	if (!arg)
		error_mes(message, "");
	new->n = atoi(arg);
	new->next = *stack;
	new->prev = NULL;
	if (*stack)
		(*stack)->prev = new;
	*stack = new;
}
void push_q(stack_t **stack, unsigned int line_number)
{
	stack_t *new, *h = *stack;
	char *arg, message[100];

	if (!stack)
		error_mes("No stack present.", "");
	new = malloc(sizeof(stack_t));
	if (!new)
		error_mes("Error: malloc failed", "");
	arg = strtok(NULL, " ");
	sprintf(message, "L%d: usage: push integer", line_number);
	if (!arg)
		error_mes(message, "");
	new->n = atoi(arg);
	new->next = NULL;
	if (!*stack)
	{
		new->prev = *stack;
		*stack = new;
		return;
	}
	while (h->next)
		h = h->next;
	h->next = new;
	new->prev = h;
}
void pop(stack_t **stack, unsigned int line_number)
{
	stack_t *iterator = *stack;
	char message[100];

	if (!stack)
		error_mes("No stack present.", "");
	sprintf(message, "L%d: can't pop an empty stack", line_number);
	if (!*stack)
		error_mes(message, "");

	*stack = iterator->next;
	if (iterator->next)
		iterator->next->prev = NULL;
	free(iterator);
}
void error_mes(char *mess, char *arg)
{
	fprintf(stderr, "%s%s\n", mess, arg);
	exit(EXIT_FAILURE);
}
