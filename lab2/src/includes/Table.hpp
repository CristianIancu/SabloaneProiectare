#ifndef TABLE_HPP
#define TABLE_HPP

#include<iostream>
#include<string>

class Table
{
public:
    Table(const std::string& title):
        title_(title) {}
    
    void print(){
        std::cout<<title_<<std::endl;
    }
private:
    std::string title_;
};




#endif