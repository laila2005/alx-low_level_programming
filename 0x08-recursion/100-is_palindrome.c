#include <stdio.h>
#include <string.h>

/**
* _is_palindrome_helper - checks if a string is a palindrome
* @s: The string to be checked
* @left: The index pointing to the beginning of the string
* @right: The index pointing to the end of the string
*
* Description: This helper function checks if the substring
* from left to right is a palindrome recursively.
*
* Return: 1 if the string is a palindrome, 0 otherwise
*/

int _is_palindrome_helper(char *s, int left, int right)
{
if (left >= right)
{
return (1);
}
if (s[left] != s[right])
{
return (0);
}
return (_is_palindrome_helper(s, left + 1, right - 1));
}

/**
* is_palindrome - checks if a string is a palindrome
* @s: The string to be checked
*
* Description: This function determines if the given string
* is a palindrome. An empty string is considered a palindrome.
*
* Return: 1 if the string is a palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
int length = strlen(s);
if (length == 0)
{
return (1);
}
return (_is_palindrome_helper(s, 0, length - 1));
}
