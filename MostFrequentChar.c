/*
** Author: Stephen SHeldon 3/11/2019
**
** Problem: Print the most frequent character given a string.
**
** Note: This program currently only really works if there exist 
**       recurring character within a string. Will fix this later.
*/

#include <stdio.h>

#define MAX_LENGTH 100

char count_frequency(char s[])
{
	char most_frequent;
	int i, j, freq_index;
	int char_freq[26];
	
	// Set all values to 0;
	for (i = 0; i < 26; i++)
		char_freq[i] = 0;
	
	j = 0;

	// Loop through till we hit null terminator	
	while (s[j] != '\0')
	{
		// Increment array, index normalized value by subtracted 'a'
		char_freq[s[j]-'a']++;
		j++;
	}
	
	// Keep track of the index of the most frequently seen char
	freq_index = 0;
	
	// Check for highest value in array
	for (i = 0; i < 26; i++)
	{
		if (char_freq[i] > char_freq[freq_index])
			freq_index = i;
	}
		
	// add 'a' to our index to get the proper char value
	return 'a' + freq_index;
}

int main()
{
	char user_string[MAX_LENGTH];
	
	do {
		printf("Please enter a string and I will find the most frequently seen character.\n");
		printf("If you wish to exit please type \"exit\"\n");
		scanf("%s", user_string);
		
		printf("most frequent character is %c\n", count_frequency(user_string));
	} while (strcmp(user_string, "exit") != 0);
	
	system("PAUSE");
	exit(0);
}
