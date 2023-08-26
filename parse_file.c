#include "monty.h"
/**
 * parse_file - Extracts the opcode from the file
 *
 * @fp: The file to extract from
 *
 */
void parse_file(FILE* fp)
{
	char line[100];
	char num[100];
	unsigned int i, line_no, num_int, n;
	line_t *file;

	file = malloc(sizeof(line_t) * 10);

	if (file == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	line_no = 0;
	n = 0;

	while(fscanf(fp, "%s %s", line, num) > 0)
	{
		line_no++;
		for (i = 0; num[i] != '\0'; i++)
		{
			if (num[i] == '$')
				num[i] = '\0';
		}

		for (i = 0; line[i] != '\0'; i++)
		{
			if (line[i] == '$')
				line[i] = '\0';
		}
		num_int = atoi(num);
		file[n].n = num_int;
		file[n].opcode = line;
		file[n].line_no = line_no;
		printf("%s %d %d\n", file[n].opcode, file[n].n, file[n].line_no);
		n++;
	
	}
	fclose(fp);
	sort_function(file, n);
}
