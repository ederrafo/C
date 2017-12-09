#include <stdio.h>


void showText(char string[]);

int main ()
{
	/* Text strings */
	char first_text[6] = "Hello";
	char second_text[]         = "Strings in C";
    char third_text[9] = {'P', 'a', 'r', 'i', 'w', 'a', 'n', 'a','\0'};
    // char fourth_text[] = {'e', 'd', 'e', 'r', 'r', 'a', 'f', 'o','\0'};
    char fourth_text[] = {'e', 'd', 'e', 'r', 'r', 'a', 'f', 'o', '\0'};
    char five_text[] = {'e', 'd', 'e', 'r'};


    printf("First text: %s\n", first_text );
    printf("Second text: %s\n", second_text );
    printf("Third text: %s\n", third_text );
    printf("Fourth text: %s\n", fourth_text );
    printf("\n");


    /* Passing Strings to Functions */
    char string[50] = "Passing Strings to Functions";
	showText(string);

    return 0;
}

void showText(char string[])
{
	printf("Text Output: ");
	puts(string);
}