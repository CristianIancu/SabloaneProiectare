#ifndef BOOK_HPP
#define BOOK_HPP

#include<iostream>
#include<vector>
#include<string>

class Book{
public:
    Book(const std::string& name):
        name_(name) {}

    void createPharagraph(const std::string& pharargraph);
    void createImage(const std::string& image);
    void createTable(const std::string& table);

    void print();
private:
    std::string name_;

    std::vector<std::string> pharagraphs_;
    std::vector<std::string> images_;
    std::vector<std::string> tables_;
};



#endif