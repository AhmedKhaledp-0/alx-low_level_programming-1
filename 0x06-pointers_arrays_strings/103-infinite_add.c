#include "main.h"

/**
 * len - to get the length of a sting
 * @str: string
 *
 * Return: length
 */

int len(char *str)
{
	int l = 0, i;

	for (i = 0; str[i] != '\0'; i++)
		l++;
	return (l);
}

/**
 * add_string - it adds two numbers that are string
 * @n1: the first number
 * @n2: second number
 * @r: the string to return
 *
 * Return: r - addition of n1 and n2
 */
char *add_string(char *n1, char *n2, char *r)
{
	int num_1, num_2, add, l1, l2, rr = 0, j = 0;

	l1 = len(n1) - 1, l2 = len(n2) - 1;
	while (l1 >= 0 && l2 >= 0)
	{
		num_1 = n1[l1] - 48;
		num_2 = n2[l2] - 48;
		add = num_1 + num_2 + rr;
		r[j] = (add % 10) + 48;
		rr = add / 10;
		l1--;
		l2--;
		j++;
	}
	while (l1 >= 0 && l2 < 0)
	{
		num_1 = n1[l1] - 48;
		add = num_1 + rr;
		r[j] = (add % 10) + 48;
		rr = add / 10;
		l1--;
		j++;
	}
	while (l2 >= 0 && l1 < 0)
	{
		num_2 = n2[l2] - 48;
		add = num_2 + rr;
		r[j] = (add % 10) + 48;
		rr = add / 10;
		l2--;
		j++;
	}
	if (l1 < 0 && l2 < 0 && rr > 0)
	{
		r[j] = rr + 48;
	}
	r[j + 1] = '\0';
	return (r);
}


/**
 * infinite_add - a function that adds two numbers.
 * @n1: first number
 * @n2: second number
 * @r: is the buffer that the function will use to store the result
 * @size_r: is the buffer size
 *
 * Return: returns r - pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int j = 0, len_;
	char temp;

	size_r--;
	if (len(n1) > size_r || len(n2) > size_r)
		return (0);

	r = add_string(n1, n2, r);

	if (len(r) > size_r)
		return (0);

	len_ = len(r) - 1;
	for (j = 0; j < len_; j++)
	{
		temp = r[j];

		r[j] = r[len_];
		r[len_] = temp;

		len_--;
	}
	return (r);
}
