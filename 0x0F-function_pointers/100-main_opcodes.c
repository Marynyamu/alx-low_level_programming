#include <stdio.h>
#include <stdlib.h>

/**
*main -  program that print the opcode of its own main function.
*@argc: number of argument passed to the program
*@argv: array of argument
*
*Return: on success, 1 or 2 in case of failure
*/

int main(int argc, char *argv[])
{

int index, bytes;
int (*address)(int, char **) = main;
unsigned char opcode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error\n");
exit(2);
}

for (index = 0; index <  bytes; index++)
{
opcode = *(unsigned char *)address;
printf("%.2x", opcode);

if (index == bytes - 1)
continue;
printf(" ");
address++;
}
printf("\n");
return (0);
}
