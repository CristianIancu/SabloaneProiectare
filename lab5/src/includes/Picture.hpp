#ifndef PICTURE_HPP
#define PICTURE_HPP

#include<string>

class Dimension{
public:
    Dimension(){}
    Dimension(int h, int w):
        height(h), width(w){}

    int height;
    int width;
};
class Picture{
public:
    virtual std::string url(){return "";}
    virtual Dimension dim(){return Dimension(0,0); }
    virtual std::string content(){return "";}
};

#endif