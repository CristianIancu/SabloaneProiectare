#include"../includes/Book.hpp"
void Book::createPharagraph(const std::string& pharargraph){
    pharagraphs_.emplace_back(pharargraph);
}
void Book::createImage(const std::string& image){
    images_.emplace_back(image);
}
void Book::createTable(const std::string& table){
    tables_.emplace_back(table);
}

void Book::print(){
    std::cout<<"Pharagraphs"<<std::endl;
    for(std::string s:pharagraphs_)
        std::cout<<"    "<< s << std::endl;

    std::cout<<"Images"<<std::endl;
    for(std::string s:images_)
        std::cout<<"    "<< s << std::endl;

    std::cout<<"Tables"<<std::endl;
    for(std::string s:tables_)
        std::cout<<"    "<< s << std::endl;
}