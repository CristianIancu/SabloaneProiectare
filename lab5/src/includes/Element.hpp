#ifndef ELEMENT_HPP
#define ELEMENT_HPP
#include<vector>

class Element{
public:
    virtual void print() = 0;

    virtual void add(Element* emelent){}
    virtual void remove(Element* element){}
    virtual const Element* get(int index){ return nullptr; }
};
#endif
