/*
** Author: Stephen Sheldon 3/11/2019
**
** Problem: Towers of Hanoi
**
*/

#include <stdio.h>

// Source is where the discs are now
// Target is where the discs need to go
// Extra is the third peg

// Returns number of steps
int hanoi(int n, int source, int target, int extra)
{
    int num_steps = 0;
    
    if(n == 1)
    {
        printf("Moving disc 1 from peg %d to peg %d\n", source, target);
        return 1;
    }
    
    num_steps += hanoi(n-1, source, extra, target);
    printf("Moving disc %d from peg %d to peg %d\n", n, source, target);
    // move n - 1 disc from extra peg to target peg
    num_steps += hanoi(n-1, extra, target, source);
    return num_steps + 1;
}

int main()
{
	int steps;
	int num_discs;
	
	printf("How many discs do you want to use for Towers of Hanoi?\n");
	scanf("%d", &num_discs);
	
	steps = hanoi(num_discs, 1, 3, 2);
	printf("Total steps is %d\n", steps);
	
	system("PAUSE");
	return 0;
}
