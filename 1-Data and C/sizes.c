/* sizes.c -- print sizes of int types */
#include <stdio.h>
int main(void) {
	printf("Size of short int: %ld\n", sizeof(short int));
	printf("Size of long int: %ld\n", sizeof(long int));
	printf("Size of long long int: %ld\n", sizeof(long long int));
	printf("Size of unsigned int: %ld\n", sizeof(unsigned int));

	return 0;
}

/* 
 * Output:
 *
 * Size of short int: 2
 * Size of long int: 8
 * Size of long long int: 8
 * Size of unsigned int: 4
 */

