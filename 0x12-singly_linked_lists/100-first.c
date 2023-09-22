#include <stdio.h>

/**
 * premain - prints something before the main func
 *
 * Descriptions: nothing new
 */

void premain(void) __attribute__ ((constructor));

void premain(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
