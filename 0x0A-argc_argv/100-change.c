#include "main.h"

/**
 * sub - a function that substracts the closest coin values to the number
 * @num: the number
 *
 * Return: the count
 */

int sub(int num)
{
	int count = 0;

	while (num >= 25)
	{
		num -= 25;
		count++;
	}
	while (num >= 10)
	{
		num -= 10;
		count++;
	}
	while (num >= 5)
	{
		num -= 5;
		count++;
	}
	while (num >= 2)
	{
		num -= 2;
		count++;
	}
	while (num >= 1)
	{
		num -= 1;
		count++;
	}

	return (count);

}

/**
 * main - a program that prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: argument count
 * @argv: argumrnt vector
 *
 * Description:
 * - Usage: ./change cents
 * - where cents is the amount of cents you need to give back
 * - if the number of arguments passed to your program is not exactly 1,
 *   print Error, followed by a new line, and return 1
 * - If the number passed as the argument is negative, print 0,
 *   followed by a new line
 * - You can use an unlimited number of coins of values 25, 10, 5, 2, & 1 cent
 *
 * the program will keep subtracting the closest coin value to the cents
 * - if cents = 100, then it substracts 100 - 25 - 25 -25 - 25= 0, then print
 *   4 cause it substracted it 4 times
 * - if count = 13, then 13 -10 -2 -1 =0 , then it prints 3
 * - if count = 101, then 100 -25 -25 -25 -25 -1 =0 then it prints 5
 *
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, s;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		if (atoi(argv[1]) < 0)
		{
			printf("0\n");
			return (0);
		}
		else
		{
			i = atoi(argv[1]);
			s = sub(i);
		}
		printf("%d\n", s);
	}

	return (0);
}
