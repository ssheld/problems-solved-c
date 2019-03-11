/*
** Author: Stephen SHeldon 3/11/2019
**
** Program that counts the set bits within an unsigned integer
**
*/
#include <stdio.h>

// Get number of set bits in binary representation
// of a positive integer
unsigned int count_set_bits(unsigned int n)
{
	unsigned int count = 0;
	while(n)
	{
		// & the last bit and add to count
		count += n & 1;
		// Arithmetic shift right
		n >>= 1;
	}
	return count;
}

int main()
{
	unsigned int value;
	printf("Welcome to the bit counter program!\n");
	do {
		printf("Please enter a positive integer and we'll count the number of set bits!!\n");
		printf("Otherwise if you wish to exit enter 0\n");
		scanf("%d", &value);
	
		printf("total count is %d\n", count_set_bits(value));
	} while (value != 0);
	
	system("PAUSE");
	exit(0);
}
