#include <stdio.h>

int main()
{
	/* Reverse string */
	char string[5];
	char outcome[5];
	int i, u;

	printf("Enter 5 characters\n");		
	scanf("%s", string);
	printf("Input string: %s\n", string);
	for(i = 4, u = 0; i >=0; u++, i--){
	    outcome[i] = string[u];
	}
	printf("You wrote: %s. The outcome is: %s", string , outcome);
	printf("\n");

	/*
		\0 is important when using C
	*/

	return 0;
}