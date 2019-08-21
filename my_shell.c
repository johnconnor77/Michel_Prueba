#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*main - basic structure function for the shell
*Return: 0
**/

int main(void)
{

	char *buffer;
	size_t  sizebuf  = 1024;
	char *token;

	while (1)
	{
		buffer = malloc(sizeof(char) * sizebuf);
		if (buffer == NULL)
		{
			free(buffer);
			exit(1);
		}

		printf("myshell$ ");

		getline(&buffer, &sizebuf, stdin);
		token = strtok(buffer, " ");

		while (token != NULL)
		{
			printf("%s", token);
			token = strtok(NULL, " ");
		}
	}
	free(buffer);
	return (0);
}
