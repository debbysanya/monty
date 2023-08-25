#include "monty.h"
/**
 * free_stack - function that frees a doubly linked list
 * @head: pointer to the head of the stack
 */
void free_stack(stack_t **head)
{
	stack_t *aux;

	while (*head != NULL)
	{
		aux = *head;
		*head = (*stack)->next;
		free(aux);
		aux = NULL;
	}
}
