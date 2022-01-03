#ifndef PHARAGRAPH_HPP
#define PHARAGRAPH_HPP

#include<iostream>
#include<string>

class Pharagraph
{
public:
    Pharagraph(const std::string& text):
        text_(text) {}
    
    void print(){
        std::cout<<text_<<std::endl;
    }
private:
    std::string text_;
};




#endif