#ifndef TABLE_HPP
#define TABLE_HPP

#include<iostream>
#include<string>

#include"Element.hpp"

class Table: public Element
{
public:
    Table(const std::string& title):
        title_(title) {}
    
    void print(){
        std::cout<<"Table with title: "<<title_<<std::endl;
    }
private:
    std::string title_;
};




#endif