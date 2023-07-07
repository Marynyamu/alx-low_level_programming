#include <stdio.h>
#include "main.h"

/**
* main - prints all arguments it receives
* @argc:display number of arguments
* @argv: array of arguments count
* Return: Always 0 (Success)
*/

int main(int argc, char *argv[])

{
	int j;

	for (j = 0; j < argc; j++)

	{

		printf("%s\n", argv[j]);

	}


	return (0);

}

