#include "main.h"
#include <stdlib.h>
#include <string.h>

/*
 * is_space - Check if a character is a space.
 * @c: The character to check.
 *
 * This function checks whether the character @c is a space (' ').
 *
 * Return: Returns 1 if @c is a space, otherwise returns 0.
 */

int is_space(char c)
{
return (c == ' ');
}

/*
 * count_words - Count the number of words in a string.
 * @str: The input string to count words from.
 *
 * This function counts the number of words in the input string @str,
 * where words are sequences of non-space
 * characters separated by spaces.
 *
 * Return: Returns the number of words found in @str.
 * If @str is NULL or empty,
 * returns 0.
 */

int count_words(char *str)
{
if (str == NULL || *str == '\0')
return (0);

int count = 0;
int in_word = 0;


while (*str != '\0')
{
if (is_space(*str))
{
in_word = 0;
}
else if (!in_word)
{
count++;
in_word = 1;
}
str++;
}
return (count);
}
/*
 * strtow - Split a string into words separated by spaces.
 * @str: The input string to be split.
 *
 * The function splits the input string @str into individual words,
 * where words are defined as sequences of non-space characters.
 * It returns a dynamically allocated array of strings, each element
 * containing a single word from the input string. The last element
 * of the returned array is NULL.
 *
 * Return: Upon success, the function
 * returns a pointer to the array
 * of words. If @str is NULL, empty,
 * or if memory allocation
 * fails, the function returns NULL.
 */

char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return ("NULL");

int num_words = count_words(str);
char **words = (char **)malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return ("NULL");

int word_index = 0;
int word_length = 0;
int in_word = 0;

while (*str != '\0')
{
if (is_space(*str))
{
if (in_word)
{
words[word_index] = (char *)malloc((word_length + 1)
* sizeof(char));
if (words[word_index] == NULL)
{

for (int i = 0; i < word_index; i++)
{
free(words[i]);
}
free(words);
return ("NULL");
}

strncpy(words[word_index], str - word_length,
word_length);
words[word_index][word_length] = '\0';
word_index++;
word_length = 0;
in_word = 0;
}
}
else
{
if (!in_word)
{
word_length = 0;
in_word = 1;
}
word_length++;
}
str++;
}

if (in_word)
{
words[word_index] = (char *)malloc((word_length + 1)
* sizeof(char));
if (words[word_index] == NULL)
{

for (int i = 0; i < word_index; i++)
{
free(words[i]);
}
free(words);
return ("NULL");
}
strncpy(words[word_index], str - word_length,
word_length);
words[word_index][word_length] = '\0';
word_index++;
}

words[word_index] = NULL;

return (words);
}
