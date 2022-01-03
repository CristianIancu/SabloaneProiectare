#ifndef SUB_CHAPTER_HPP
#define SUB_CHAPTER_HPP

#include<iostream>
#include<string>
#include<vector>

#include"Element.hpp"

class SubChapter
{
public:
    SubChapter(const std::string& name):
        name_(name) {}

    void createNewElement(Element* e){
        elements_.emplace_back(e);
    }

    void print(){
        std::cout<<"SubChapter: "<<name_<<std::endl;
        for(auto s : elements_){
            s->print();
        }
    }
private:
    std::string name_;
    std::vector<Element*> elements_;

};




#endif