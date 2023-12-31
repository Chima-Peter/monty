#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

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
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

typedef struct line_s
{
	char *opcode;
	int n;
	unsigned int line_no;
} line_t;
void parse_file(FILE *fp);
void sort_function(line_t *file, int n);
void push(stack_t **stack, unsigned int n);
void pall(stack_t **stack, unsigned int n);
void pint(stack_t **stack, unsigned int n);
void pop(stack_t **stack, unsigned int n);
void add(stack_t **stack, unsigned int n);
void swap(stack_t **stack, unsigned int n);
void nop(stack_t **stack, unsigned int n);

#endif
