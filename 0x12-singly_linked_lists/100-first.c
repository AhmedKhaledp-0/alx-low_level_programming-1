#include <stdio.h>
void __attribute__((constructor)) start(void);

/**
 * start - executes this function before the main() function
 */
void start(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
