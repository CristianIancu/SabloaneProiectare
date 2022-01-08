#ifndef AUTHOR_HPP
#define AUTHOR_HPP

#include<iostream>
#include<string>

class Author
{
public:
    Author(const std::string& name):
        name_(name) {}
    
    void print(){
        std::cout<<name_<<std::endl;
    }
private:
    std::string name_;
    std::string surName_;
    
};




#endif