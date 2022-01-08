#ifndef IMAGE_HPP
#define IMAGE_HPP

#include<iostream>
#include<string>
#include<stdio.h>
#include <unistd.h>

#include"Element.hpp"

class Image: public Element
{
public:
    Image(const std::string& imageName):
        imageName_(imageName) {
            sleep(5);

        }
    
    void print() override{
        std::cout<<"Image with name: "<<imageName_<<std::endl;
    }
private:
    std::string imageName_;
};




#endif