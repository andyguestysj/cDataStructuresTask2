#include <stdio.h>
#include <string.h>

typedef struct Book {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
   float price;
} Book;

void printBook( Book *book );

int main(void) {
  
  Book book1;
  strcpy(book1.title, "Lovecraft Country");
  strcpy(book1.author, "Matt Ruff");
  strcpy(book1.subject, "Horror");
  book1.book_id = 19334;
  book1.price = 5.99;


  printBook(&book1);


  return 0;
}

void printBook(Book *book)
{
  printf("Title : %s\n", book->title);
  printf("Author : %s\n", book->author);
  printf("Subject : %s\n", book->subject);
  printf("Book ID : %d\n", book->book_id);
  printf("Price : %.2f\n", book->price);
}

/* Exercise 2 Tasks

1. Create a new data structure to store author details. It should contain `surname` `firstName` and `publisher`
2. Modify Book to remove the author data member and replace it with a variable holding your new author structure.
3. Modify main() so that the author details are set
4. Modify printBook to print out the details from the new author structure

*/
