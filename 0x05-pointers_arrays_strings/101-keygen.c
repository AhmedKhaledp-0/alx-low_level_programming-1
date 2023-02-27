#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - a program that generates random valid passwords for the program 
 *
 * Return: 0 (success)
 */

int main(void)
{
	int rand_, sum;

	srand(time(NULL));

	sum = 2772;
	while (sum > 122)
	{
		rand_ = rand() % 100;
		sum -= rand_;
		printf("%c", rand_);
	}
	printf("%c", sum);
	return (0);
}
