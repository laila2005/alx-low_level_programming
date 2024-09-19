#include <stdio.h>
#include <stdbool.h>

/**
* is_palindrome - Checks if a number is a palindrome.
* @num: The number to check.
*
* Return: true if num is a palindrome, false otherwise.
*/
bool is_palindrome(int num)
{
int original = num, reversed = 0, remainder;

while (num != 0)
{
remainder = num % 10;
reversed = reversed * 10 + remainder;
num /= 10;
}

return (original == reversed);
}

/**
* find_largest_palindrome - Finds the largest palindromic number
*                            that is the product of two 3-digit numbers.
*
* Return: The largest palindromic number.
*/
int find_largest_palindrome(void)
{
int max_palindrome = 0;
int i, j, product;

for (i = 100; i < 1000; i++)
{
for (j = i; j < 1000; j++)
{
product = i * j;
if (is_palindrome(product) && product > max_palindrome)
{
max_palindrome = product;
}
}
}

return (max_palindrome);
}

/**
* save_result - Saves the result to the specified file.
* @filename: The name of the file to save the result.
* @result: The result to save.
*/
void save_result(const char *filename, int result)
{
FILE *file = fopen(filename, "w");
if (file == NULL)
{
perror("Error opening file");
return;
}

fprintf(file, "%d", result);
fclose(file);
}

int main(void)
{
int largest_palindrome = find_largest_palindrome();
save_result("102-result", largest_palindrome);
return (0);
}
