#ifndef IMAGE_PROXY_HPP
#define IMAGE_PROXY_HPP

#include"Image.hpp"

class ImageProxy: public Element, public Picture
{
public:
    ImageProxy(const std::string& url):
        url_(url){
            realImg = nullptr;
        }

    void print() override{
        loadImage();

        std::cout<<"Image with url: "<<url_<<std::endl;
    }
private:
    Image loadImage(){

        if(realImg == nullptr){
            realImg = new Image(url_);
        }
        return *realImg;
    }

    std::string url_;
    Dimension dim_;
    Image* realImg;
};




#endif