#ifndef CHAPTER_HPP
#define CHAPTER_HPP

#include<iostream>
#include<string>
#include<vector>

#include"SubChapter.hpp"

class Chapter
{
public:
    Chapter(const std::string& name):
        name_(name) {}
    
    int createSubChapter(const std::string& c){
        subChapters_.emplace_back(c);
        return subChapters_.size()-1;
    }
    SubChapter getSubChapter(const int& index){
        return subChapters_[index];
    }
    void print(){
        std::cout<<name_<<std::endl;
    }

private:
    std::string name_;
    std::vector<SubChapter> subChapters_;
};




#endif