#include "monty.h"

/**
 * addnode - Add a new node at the end of a stack
 * @head: Pointer to the head of the stack
 * @n: Value to be added to the new node
 * Return: Pointer to the new node
 */
stack_t *addnode(stack_t **head, int n)
{
	stack_t *new_node = malloc(sizeof(stack_t));

	if (!new_node)
	{
		FPRINTF(STDERR, "Error: malloc failed\n");
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	new_node->n = n;
	new_node->next = NULL;

	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	stack_t *current = *head;

	while (current->next)
		current = current->next;
	new_node->prev = current;
	current->next = new_node;

	return (new_node);
}
