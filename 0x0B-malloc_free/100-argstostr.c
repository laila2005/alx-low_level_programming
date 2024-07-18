#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The number of arguments.
 * @av: An array of strings containing arguments.
 *
 * Return: A pointer to a new string containing all arguments,
 *         or NULL if failure occurs.
 */

char *argstostr(int ac, char **av)
{

int total_length = 0;
int i, j;
int length = 0;
int position = 0;
char *concatenated = (char *)malloc((total_length + 1) * sizeof(char));

    if (ac == 0 || av == NULL)
        return ("NULL");

    for (i = 0; i < ac; i++)
    {
        
        while (av[i][length] != '\0')
            length++;
        total_length += length + 1;
    }

    if (concatenated == NULL)
        return ("NULL");

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
