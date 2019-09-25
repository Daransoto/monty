#include "monty.h"
/**
* add - Calculates the sum of the top 2 elements on stack or queue.
* @stack: Stack.
* @line_number: Line number.
*/
void add(stack_t **stack, unsigned int line_number)
{
	char message[100];

	sprintf(message, "L%d: can't add, stack too short", line_number);
	if (!stack)
		error_mes("No stack present.", "");
	if (!*stack || !(*stack)->next)
		error_mes(message, "");
	(*stack)->next->n += (*stack)->n;
	pop(stack, line_number);
}
/**
* sub - Calculates the substraction of the top 2 elements on stack or queue.
* @stack: Stack.
* @line_number: Line number.
*/
void sub(stack_t **stack, unsigned int line_number)
{
	char message[100];

	sprintf(message, "L%d: can't sub, stack too short", line_number);
	if (!stack)
		error_mes("No stack present.", "");
	if (!*stack || !(*stack)->next)
		error_mes(message, "");
	(*stack)->next->n -= (*stack)->n;
	pop(stack, line_number);
}
/**
* divi - Calculates the division of the top 2 elements on stack or queue.
* @stack: Stack.
* @line_number: Line number.
*/
void divi(stack_t **stack, unsigned int line_number)
{
	char message[100];

	sprintf(message, "L%d: can't div, stack too short", line_number);
	if (!stack)
		error_mes("No stack present.", "");
	if (!*stack || !(*stack)->next)
		error_mes(message, "");
	sprintf(message, "L%d: division by zero", line_number);
	if (!(*stack)->n)
		error_mes(message, "");
	(*stack)->next->n /= (*stack)->n;
	pop(stack, line_number);
}
/**
* mul - Calculates the multiplication of the top 2 elements on stack or queue.
* @stack: Stack.
* @line_number: Line number.
*/
void mul(stack_t **stack, unsigned int line_number)
{
	char message[100];

	sprintf(message, "L%d: can't mul, stack too short", line_number);
	if (!stack)
		error_mes("No stack present.", "");
	if (!*stack || !(*stack)->next)
		error_mes(message, "");
	(*stack)->next->n *= (*stack)->n;
	pop(stack, line_number);
}
/**
* mod - Calculates the modulus of the top 2 elements on stack or queue.
* @stack: Stack.
* @line_number: Line number.
*/
void mod(stack_t **stack, unsigned int line_number)
{
	char message[100];

	sprintf(message, "L%d: can't mod, stack too short", line_number);
	if (!stack)
		error_mes("No stack present.", "");
	if (!*stack || !(*stack)->next)
		error_mes(message, "");
	sprintf(message, "L%d: division by zero", line_number);
	if (!(*stack)->n)
		error_mes(message, "");
	(*stack)->next->n %= (*stack)->n;
	pop(stack, line_number);
}
