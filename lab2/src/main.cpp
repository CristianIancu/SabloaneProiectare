#include "includes/Book.hpp"
#include "includes/Image.hpp"
#include "includes/Table.hpp"
#include "includes/Paragraph.hpp"

int main(){
    Book discoTitanic = Book("Disco Titanic");
    Author rpGheo = Author("Radu Pavel Gheo");

    discoTitanic.addAuthor(rpGheo);

    int indexChapterOne = discoTitanic.createChapter("Capitolul 1");
    Chapter chp1 = discoTitanic.getChapter(indexChapterOne);
    int indexSubChapterOneOne = chp1.createSubChapter("Subcapitolul 1.1");
    SubChapter scOneOne = chp1.getSubChapter(indexSubChapterOneOne);
    
    scOneOne.createNewElement(new Paragraph("Paragraph 1"));
    scOneOne.createNewElement(new Paragraph("Paragraph 2"));
    scOneOne.createNewElement(new Paragraph("Paragraph 3"));
    scOneOne.createNewElement(new Image("Image 1"));
    scOneOne.createNewElement(new Paragraph("Paragraph 4"));
    scOneOne.createNewElement(new Table("Table 1"));
    scOneOne.createNewElement(new Paragraph("Paragraph 5"));
    scOneOne.print();
}