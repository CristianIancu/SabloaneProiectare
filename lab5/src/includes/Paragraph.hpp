#ifndef PARAGRAPH_HPP
#define PARAGRAPH_HPP

#include<iostream>
#include<string>

#include"Element.hpp"
#include"AlignStrategy.hpp"
#include"AlignCenter.hpp"
#include"AlignLeft.hpp"
#include"AlignRight.hpp"

const int TEXT_MAX_LENGTH = 15;
class Paragraph: public Element
{
public:
    Paragraph(const std::string& text):
        text_(text) {}
    
    void print(){
        std::cout<<"Paragraf: "<<text_<<std::endl;
    }
    void setAlighStrategy(AlignStrategy* alignStrategy){
        textAlign = alignStrategy;
        textAlign->render(this,"");
    }
    std::string getText(){return text_;}
    void setText(std::string text){
        text_ = text;
    }
private:
    std::string text_;
    AlignStrategy* textAlign;
};




#endif