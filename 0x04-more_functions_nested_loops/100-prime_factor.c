#include <stdio.h>

/**
 * main - Entry point of the program to find the largest prime factor
 *        of the number 612852475143 and print it.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long int number = 612852475143;
long int largest_prime_factor = -1;
long int i;

while (number % 2 == 0)
{
largest_prime_factor = 2;
number /= 2;
}
for (i = 3; i * i <= number; i += 2)
{
while (number % i == 0)
{
largest_prime_factor = i;
number /= i;
}
}
if (number > 2)
{
largest_prime_factor = number;
}
printf("%ld\n", largest_prime_factor);
return (0);
}
