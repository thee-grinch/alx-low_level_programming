/**
*checkprime - checks a prime number
*@n: number
*@i: divisor
*Return: always 0
*/
int checkprime(int n, int i)
{
	if (n == 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % i == 0)
		return (0);
	else if (i * i > n)
		return (1);
	else
		return (checkprime(n, i+1));
}
/**
*is_prime_number - check the code
*@n: the prime number
*Return:  always 0
*/
int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else
		return (checkprime(n, 2));
}
