#include <stdio.h>
#include <string.h>
/* Strings handling functions are defined under "string.h" header file. */
/* Handling functions:
 * strcat() : Concatenates(joins) two strings
 * strcmp() : Compares two string
 * strlwr() : Converts string to lowercase
 * strupr() : Converts string to uppercase
 */
int main()
{
   /*
    * strlen() => Calculates the length of string
    * prototype size_t strlen(const char *str);
	*/
	char c[] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', 'm', 'e', 'r', '\0'};
	int temp;
	temp = strlen(c);
	printf("\n\n=== strlen ===");
	printf("\nc: %s\n", c);
	printf("Length of c: %i\n", temp);


   /*
	* strcpy() => Copies a string to another string
	* prototype : char* strcpy(char* destination, const char* source);
	*/
	printf("\n\n=== strcpy ===");
	char string1[30] = "Abu";
	char string2[30];

	strcpy(string2, string1);
	printf("\n");
	puts(string1);
	puts(string2);


	/*
	 * strcat() => 
	 * char *strcat(char *dest, const char *src)
	 */
	printf("\n\n=== strcat ===\n");
	char name[] = "Eder ";
	char lastname[] = "Pariwana";
	printf("name %s\n", name );
	printf("lastname %s\n", lastname );
	strcat(name, lastname);
	puts(name);

	printf("\n\n");
	char dog[] = { 'p', 'a', 's', 't', 'o', 'r', '\0'};

	// char cat[] = { 's', 'i', 'a', 'm', 'e', 's', 'e', 's'};
	printf("dog: %s\n", dog);
	// printf("cat: %s\n", cat);
	strcpy(dog, "jor");
	printf("dog: %s\n", dog);

	// char dog_copy[6] = {};
	// strcpy(dog_copy, dog);
	// puts(dog_copy);

	// // printf("cat:%s\n", cat);
	// strcpy(dog_copy, cat);
	// // puts(cat);
	// // // puts(dog);
	// printf("cadena:%s\n", dog_copy);

	












	return 0;
}

