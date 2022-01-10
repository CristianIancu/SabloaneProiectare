#ifndef ALIGN_STRATEGY_HPP
#define ALIGN_STRATEGY_HPP

#include"Paragraph.hpp"
class Paragraph;
class AlignStrategy{
public:
    virtual void render(Paragraph p, std::string context) = 0;
};

#endif