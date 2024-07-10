/**
* _is_prime_helper - helps to determine if a number is prime
* @n: The number to be checked
* @i: The current divisor to check
*
* Description: This helper function checks if n is divisible by i.
* It does so by incrementing i recursively until i * i exceeds n.
*
* Return: 1 if n is a prime number, 0 otherwise
*/
int _is_prime_helper(int n, int i)
{
if (i * i > n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (_is_prime_helper(n, i + 1));
}

/**
* is_prime_number - checks if an integer is a prime number
* @n: The number to be checked
*
* Description: This function determines if a given integer is a prime number.
* If the number is less than or equal to 1,
* it returns 0. Otherwise, it calls
* a helper function to check for divisibility by
* integers up to the square root of n.
*
* Return: 1 if the number is a prime number, 0 otherwise
*/
int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (_is_prime_helper(n, 2));
}
