#ifndef IMAGE_HPP
#define IMAGE_HPP

#include<iostream>
#include<string>
#include<stdio.h>
#include <unistd.h>

#include"Element.hpp"
#include"Picture.hpp"
class Image: public Element, public Picture
{
public:
    Image(const std::string& url):
        url_(url) {
            sleep(5);

        }
    std::string content() {
        return content_;
    }
    void print() override{
        std::cout<<"Image with name: "<<url_<<std::endl;
    }
private:
    std::string url_;
    std::string content_;
};




#endif