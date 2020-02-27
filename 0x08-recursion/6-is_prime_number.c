/**
 * my_primeNumber - Checks if the input integer is a prime number
 * @n: check
 * @i: incrementor
 * @limit: stop
 * Return: Varies depending of conditions
 */

int my_primeNumber(int n, int i, int limit)
{
if ((n % i == 0 && i <= limit) || n < 0 || n == 1)
return (0);
else if (n % i != 0 && i <= limit)
return (my_primeNumber(n, i + 1, limit));
else
return (1);
}

/**
 * is_prime_number -  Checks if the input integer is a prime number
 * @n: number to test
 * Return: Varies depending of conditions
 */

int is_prime_number(int n)
{
return (my_primeNumber(n, 2, n / 2));
}
