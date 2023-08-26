#include "monty.h"
/**
 * main - The main function of the monty project
 *
 * @argc: Argument count
 *
 * @argv: Array of argument variables
 *
 * Return: Either EXIT_SUCCESS or EXIT_FAILURE
 */
int main(int argc, char* argv[])
{
	FILE *fp;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		fprintf(stderr, "Error: Can't open file <file>");
		exit(EXIT_FAILURE);
	}
	parse_file(fp);
	return (0);
}
