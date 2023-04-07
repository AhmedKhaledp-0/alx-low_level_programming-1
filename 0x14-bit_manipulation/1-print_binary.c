#include "main.h"

/**
 * print_binary - Prints the binary representation of decimal numbers.
 * @n: Prints in binary.
 */
void print_binary(unsigned long int n)
{
    if (n == 0)
    {
        _putchar('0');
        return;
    }

    unsigned long int i_val = 1;
    bool checks = true;
    int i;

    for (i = 0; i < sizeof(unsigned long int) * 8; i++)
    {
        i_val <<= 1;
        if (n < i_val)
            break;
    }

    while (i_val != 0)
    {
        i_val >>= 1;
        if ((n & i_val) != 0)
        {
            checks = false;
            _putchar('1');
        }
        else if (!checks)
        {
            _putchar('0');
        }
    }
}
