#ifndef PARAGRAPH_HPP
#define PARAGRAPH_HPP

#include<iostream>
#include<string>

#include"Element.hpp"

class Paragraph: public Element
{
public:
    Paragraph(const std::string& text):
        text_(text) {}
    
    void print(){
        std::cout<<"Paragraf: "<<text_<<std::endl;
    }
private:
    std::string text_;
};




#endif