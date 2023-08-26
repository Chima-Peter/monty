#include "monty.h"
/**
 * sort_function - Selects the function to use for each opcode
 *
 * file - The struct array holding the opcodes
 *
 * @n: Integer whuch is length of the struct array
 *
 */
void sort_function(line_t *file, int n)
{
	int i;
	instruction_t *sort;

	sort = malloc(sizeof(instruction_t) * sizeof(instruction_t));

	if (sort == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	strcpy(sort[0].opcode, "push");
	sort[0].f = push;
	strcpy(sort[1].opcode, "pall");
        sort[1].f = pall;
	strcpy(sort[2].opcode, "pint");
	sort[2].f = pint;
	/*strcpy(sort[3].opcode, "pop");
        sort[3].f = pop;
	strcpy(sort[4].opcode, "swap");
	sort[4].f = swap;
	strcpy(sort[5].opcode, "add");
        sort[5].f = add;
	strcpy(sort[6].opcode, "nop");
        sort[6].f = nop;*/
	for (i = 0; i < 2; i++)
	{
		printf("%s\n", sort[1].opcode);
	}

	(void) n;
	(void) file;
}
