#include "includes/Book.hpp"
#include "includes/Image.hpp"
#include "includes/Table.hpp"
#include "includes/Paragraph.hpp"

int main(){
    Book noapteBuna = Book("Noapte buna, copii!");
    Author rpGheo = Author("Radu Pavel Gheo");
    noapteBuna.addAuthor(rpGheo);

    Section cap1 = Section("Capitolul 1");
    Section cap11 = Section("Capitolul 1.1");
    Section cap111 = Section("Capitolul 1.1.1");
    Section cap1111 = Section("Subchapter 1.1.1.1");
    noapteBuna.addContent(new Paragraph("Multumesc celor care ..."));
    noapteBuna.addContent(&cap1);

    cap1.add(new Paragraph("Moto capitol"));
    cap1.add(&cap11);
    cap11.add(new Paragraph("Text from subchapter 1.1"));
    cap11.add(&cap111);
    cap111.add(new Paragraph("Text from subchapter 1.1.1"));
    cap111.add(&cap1111);
    cap1111.add(new Image("Image subchapter 1.1.1.1"));

    noapteBuna.print();   
}