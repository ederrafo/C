/* C program to create a file called emp.rec and store information
 * about a person, in terms of his name, age and salary.
 */

#include <stdio.h>

void main()
{
 FILE *fptr;

 /* open for writing */
 fptr = fopen("/home/ubuntu/file.rec", "w");
 
 fprintf(fptr, "Abu Mohammad Al-Sishani");

}


