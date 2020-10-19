#include <stdio.h>

/**
 * main - Print the the name of the file it was compiled from.
 **/

void main(void)
{
	printf("%s\n", __FILE__);
}
