#include <stdlib.h>

#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
#endif /* MAIN_H */

/**
 * main - Custom main function
 *
 * Description: This function prints the name of the
 * file it was compiled from, followed by a new line.
 *
 * Return: On success, returns the character written. On error, returns -1.
 */

int main(void)
{
char *filename = __FILE__;
size_t len = 0;
unsigned long int i;

while (filename[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{
_putchar(filename[i]);
}
_putchar('\n');
exit(EXIT_SUCCESS);
}
