#ifndef IMAGE_HPP
#define IMAGE_HPP

#include<iostream>
#include<string>

class Image
{
public:
    Image(const std::string& imageName):
        imageName_(imageName) {}
    
    void print(){
        std::cout<<imageName_<<std::endl;
    }
private:
    std::string imageName_;
};




#endif