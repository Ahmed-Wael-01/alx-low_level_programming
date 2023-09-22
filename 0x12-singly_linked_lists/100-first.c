#include <stdio.h>

/**
 * premain - prints something before the main func
 *
 * Descriptions: nothing new
 */

void premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
} __attribute__ ((constructor));
