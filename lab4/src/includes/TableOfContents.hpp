#ifndef TABLE_CONT_HPP
#define TABLE_CONT_HPP

#include<string>

#include"Element.hpp"

class TableOfContents : public Element{
public:
    TableOfContents(std::string something):
        something_(something) {}

private:
    std::string something_;
};
#endif