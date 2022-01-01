#include "includes/Book.hpp"

int main(){
    Book myBook = Book("MyBook");
    myBook.createPharagraph("Pharagraph 1");
    myBook.createPharagraph("Pharagraph 2");
    myBook.createPharagraph("Pharagraph 3");
    myBook.createImage("Image 1"); 
    myBook.createPharagraph("Pharagraph 4");
    myBook.createTable("Table 1"); 
    myBook.createPharagraph("Pharagraph 5");

    myBook.print();
}