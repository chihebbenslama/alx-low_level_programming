#include<stdio.h>

/**
 * beforemain - Apply the constructor attribute to beforemain() so that it
 *   is executed before main()
 */
void beforemain(void) __attribute__ ((constructor));

/**
 * beforemain - implementation of beforemain
 */
void beforemain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
