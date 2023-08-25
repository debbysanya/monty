#include "monty.h"
/**
 * loc_error - print malloc error
 *
 */
void loc_error(void)
{
	fprintf(stder, "Error: malloc failed\n");
	free(mont);
	exit(EXIT_FAILURE);
}

void print_line_number(unsigned int line)
{
	fprintf(stderr, "L%d: unknown instruction %s\n", linemont->arr[0]):
}


