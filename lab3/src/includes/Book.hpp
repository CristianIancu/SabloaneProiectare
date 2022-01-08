#ifndef BOOK_HPP
#define BOOK_HPP

#include<iostream>
#include<string>
#include<vector>

#include"Author.hpp"
#include"Section.hpp"

class Book : Section
{
public:
    Book(const std::string& title):
        title_(title) {}
    
    void addAuthor(const Author& a){
        authors_.emplace_back(a);
    }
    void addContent(Element* element){
        Section::add(element);
    }
    virtual void print(){
        std::cout<<title_<<std::endl<<std::endl;
        std::cout<<"Authors:"<<std::endl;

        for(Author& a:authors_)
            a.print();
        std::cout<<std::endl;

        Section::print();

        
    }

private:
    std::string title_;
    std::vector<Author> authors_;
};




#endif