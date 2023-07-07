#include <stdio.h>
		
#include "main.h"
		

		
/**
		
 * main - print the number of arguments passed to the program
		
 * @argc:displays number of arguments passed
		
 * @argv: array of arguments counts
		
 *
		
 * Return: Always 0 (Success)
		
 */
		

		
int main(int argc, char *argv[])
		
{
		
(void) argv; /*Ignore argv to avoid unused warning on complier*/
		
	printf("%d\n", argc - 1);
		

		
	return (0);
		
}
