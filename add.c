#include "monty.h"
/**
 * f_add - Adds the top two elements of the stack.
 * @stack: Pointer to the head of the stack
 * @line_number: Line number where the operation was encountered
 */
void f_add(stack_t **stack, unsigned int line_number)
{
	if (*stack && (*stack)->next)
	{
		int sum = (*stack)->n + (*stack)->next->n;

		pop(stack, line_number);
		(*stack)->n = sum;
	}
	else
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		free_stack(*stack);
		exit(EXIT_FAILURE);
	}
}
