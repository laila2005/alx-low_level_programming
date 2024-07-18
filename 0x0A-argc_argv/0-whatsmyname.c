#include "main.h"
#include <stdio.h>

/**
 * mynameis - Prints the name of the program.
 * @argc: The number of command-line arguments (unused).
 * @argv: An array containing the command-line arguments (unused).
 */

void mynameis(int argc, char *argv[])
{
if (argc > 0 && argv[0] != NULL)
{
printf("%s\n", argv[0]);
}
}
