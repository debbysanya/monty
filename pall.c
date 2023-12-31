#include "monty.h"
/**
 * f_pall - function that prints the stack
 * @stack: pointer to the head of the stack
 * @line_number: Not used
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *h;
	(void)line_number;

	if (!stack || !(*stack))
		return;
	h = *stack;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
