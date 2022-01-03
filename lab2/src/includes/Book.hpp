#ifndef BOOK_HPP
#define BOOK_HPP

#include<iostream>
#include<string>
#include<vector>

#include"Author.hpp"
#include"Chapter.hpp"

class Book
{
public:
    Book(const std::string& title):
        title_(title) {}
    
    void addAuthor(const Author& a){
        authors_.emplace_back(a);
    }
    int createChapter(const std::string& c){
        chapters_.emplace_back(c);
        return chapters_.size()-1;
    }
    Chapter getChapter(const int& index){
        return chapters_[index];
    }
    void print(){
        std::cout<<title_<<std::endl;
    }

private:
    std::string title_;
    std::vector<Chapter> chapters_;
    std::vector<Author> authors_;
};




#endif