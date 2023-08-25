#ifndef MONTY_H
#define MONTY_H
#define BUF_SIZE 1024


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <stdarg.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


#define DELIMITERS " \n\t\r\v\f"

extern bus_t bus;

typedef struct bus_s
{
	FILE *file;
	char *content;
} bus_t


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct param
{
	usigned int line_number;
	char **arr;
	int n;
	FILE *file;
	int entry;
	int read_len;
	char buffeer[BUF_SIZE];
} param;
typedef struct bus_s
{
	FILE *file;
	char *content;
} bus_t;

void pop(stack_t **stack, unsigned int line);
void push_stack(stack_t **stack, unsigned int line_number);
void f_add(stack_t **stack, unsigned int line_number);
void f_pall(stack_t **stack, unsigned int line_number);
void free_stack(stack_t **head);
void f_nop(stack_t **stack, unsigned int line_number);
stack_t *addnode(stack_t **head, int n);
int main(int argc, char *argv[]);
void config(void)
void print_line_number(unsigned int line)
void loc_error(void)
int parse_monty_file(char *file_path);

extern param *mont;
#endif /* MONTY_H */
