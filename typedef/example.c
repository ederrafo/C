#include <stdio.h>
#include <string.h>

/* typedef with struct */
struct Backpacks
{
	char brand[50];
	int closures;
	int year;
};
typedef struct Backpacks Backpack;

typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
} Book;

/* basic typedef */
typedef int Pages;



int main()
{
	Backpack backpack;

	strcpy(backpack.brand, "Samsonite");
	backpack.closures = 4;
	backpack.year = 2017;
	
	printf( "Backpack brand : %s\n", backpack.brand);
	printf( "Backpack closures : %d\n", backpack.closures);
	printf( "Backpack year : %d\n", backpack.year);
	printf("\n");

	
	Book book;

	strcpy(book.title, "El Sapa Tupac Yupanqui en la Polinesia");
	strcpy(book.author, "Jose Antonio Del Busto");
	strcpy(book.subject, "Tupac Yupanqui descubridor de la polinesia");
	book.book_id = 1985;

	printf( "Book title : %s\n", book.title);
	printf( "Book author : %s\n", book.author);
	printf( "Book subject : %s\n", book.subject);
	printf( "Book book_id : %d\n", book.book_id);
	
	Pages Book_pages;
	Book_pages = 3009;
	printf( "Book pages : %d\n", Book_pages);
	printf("\n");






	return 0;

}
