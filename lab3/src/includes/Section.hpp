#ifndef SECTION_HPP
#define SECTION_HPP

#include<string>

#include"Element.hpp"

class Section : public Element{
public:
    Section(){}
    Section(std::string title):
        title_(title) {}
    
    void add(Element* element){
        elements_.emplace_back(element);
    }
    void remove(Element* element){

    }
    const Element* get(const int& index){
        return elements_[index];
    }

    virtual void print(){
        std::cout<<title_<<std::endl;
    }

private:
    std::string title_;
};
#endif