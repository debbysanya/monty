#include "monty.h"

/**
 * main - Entry point for Monty interpreter
 * @argc: Argument count
 * @argv: Argument vector
 * Return: EXIT_SUCCESS on success, EXIT_FAILURE on failure
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}
	if (!parse_monty_file(argv[1]))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
/**
 * parse_monty_file - Parse a Monty byte code file
 * @file_path: Path to the Monty file
 * Return: 1 on success, 0 on failure
 */
int parse_monty_file(char *file_path)
{
	char *line = NULL;
	size_t len = 0;
	FILE *file = fopen(file_path, "r");
	unsigned int line_number = 0;

	mont->file
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", file_path);
		return (0);
	}
	free(line);
	fclose(monty->file);
	return (1);
}
