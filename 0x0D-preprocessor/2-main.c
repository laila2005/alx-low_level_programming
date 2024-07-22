#include <stdlib.h>
	
#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
#endif /* MAIN_H */

int main(void)
{
char* filename = __FILE__;
size_t len = 0;
long unsigned int i;
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
