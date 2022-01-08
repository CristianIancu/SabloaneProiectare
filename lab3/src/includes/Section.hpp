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
        elements_.push_back(element);
    }
    void remove(Element* element){

    }
    const Element* get(const int& index){
        return elements_[index];
    }

    virtual void print(){
        std::cout<<title_<<std::endl;

        for(Element* e: elements_)
            e->print();
    }
protected:
    std::vector<Element*> elements_;
private:
    std::string title_;
};
#endif