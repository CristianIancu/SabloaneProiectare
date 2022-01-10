#include <chrono>
#include <ctime> 

#include "includes/Book.hpp"
#include "includes/Paragraph.hpp"
int main(){
    Section cap1 = Section("Capitolul 1");
    Paragraph p1 = Paragraph("Paragraph 1");
    cap1.add(p1);
    Paragraph p2 = Paragraph("Paragraph 2");
    cap1.add(p2);
    Paragraph p3 = Paragraph("Paragraph 3");
    cap1.add(p3);
    Paragraph p4 = Paragraph("Paragraph 4");
    cap1.add(p4);

    std::cout<<"Printing without Alignment"<<std::endl;
    cap1.print();

    p1.setAlignStrategy(new AlignCenter());
    //p2.setAlignStrategy(new AlignRight());
    //p3.setAlignStrategy(new AlignLeft());
    std::cout<<std::endl<<"Printing with Alignment"<<std::endl;
    cap1.print();
}