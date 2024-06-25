#include "main.h"
#include <stdio.h>

/**
 * times_table - Prints the 9 times table from 0 to 9.
 */

void times_table(void)
{
 int i, j;

for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
if (j == 0)
printf("%2d", i * j);
else
printf(" ,%2d", i * j);
}
printf("\n");
} 
}
