#include<stdio.h>
#include<string.h>

typedef struct Books
{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
}Book;

int main()
{
	Book book;

	strcpy(book.title, "C");
	strcpy(book.author,"Runoob");
	strcpy(book.subject, "Programming");
	book.book_id = 12345;

	printf("%s\n%s\n%s\n%d\n",book.title,book.author,book.subject,book.book_id);

	return 0;
}
