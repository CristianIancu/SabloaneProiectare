#include <chrono>
#include <ctime> 

#include "includes/Book.hpp"
#include "includes/Image.hpp"
#include "includes/Table.hpp"
#include "includes/Paragraph.hpp"

int main(){
    auto start = std::chrono::system_clock::now();
    Image img1 = Image("Pamela Andrerson");
    Image img2 = Image("Kim Kardashian");
    Image img3 = Image("Kirby Griffin");

    Section playboyS1 = Section("Front Cover");
    playboyS1.add(&img1);
    Section playboyS2 = Section("Summer Girls");
    playboyS2.add(&img2);
    playboyS2.add(&img3);

    Book playboy = Book("Playboy");

    playboy.addContent(&playboyS1);
    playboy.addContent(&playboyS2);
    
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end-start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "Creation of the content took " << elapsed_seconds.count() << " miliseconds"<<std::endl;
    
    start = std::chrono::system_clock::now();
    playboyS1.print();
    end = std::chrono::system_clock::now();
    std::cout << "Printing of the section 1 took  " << elapsed_seconds.count() << " miliseconds"<<std::endl;

    start = std::chrono::system_clock::now();
    playboyS1.print();
    end = std::chrono::system_clock::now();
    std::cout << "Printing again the section 1 took  " << elapsed_seconds.count() << " miliseconds"<<std::endl;

}