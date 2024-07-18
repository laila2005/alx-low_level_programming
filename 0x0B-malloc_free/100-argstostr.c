#include <stdio.h>
#include <stdlib.h>

/**
* argstostr - Concatenates all the arguments of your program.
* @ac: The number of arguments.
* @av: An array of strings containing arguments.
*
* Return: A pointer to a new string containing all arguments,
*or NULL if failure occurs.
*/

char *argstostr(int ac, char **av)
{
if (ac == 0 || av == NULL)
return ("NULL");

int total_length = 0;
int i, j;
char *concatenated;

for (i = 0; i < ac; i++)
{
int length = 0;
while (av[i][length] != '\0')
length++;
total_length += length + 1;
}

concatenated = (char *)malloc((total_length + 1) * sizeof(char));
if (concatenated == NULL)
return ("NULL");

int position = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
concatenated[position] = av[i][j];
position++;
}
concatenated[position] = '\n';
position++;
}
concatenated[position] = '\0';
return (concatenated);
}
