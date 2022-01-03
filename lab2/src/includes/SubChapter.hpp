#ifndef SUB_CHAPTER_HPP
#define SUB_CHAPTER_HPP

#include<iostream>
#include<string>
#include<vector>

#include"Pharagraph.hpp"
#include"Image.hpp"
#include"Table.hpp"

class SubChapter
{
public:
    SubChapter(const std::string& name):
        name_(name) {}

    void createNewParagraph(const std::string& s){
        paragraphs_.emplace_back(s);
    }
    void createNewImage(const std::string& s){
        images_.emplace_back(s);
    }
    void createNewTable(const std::string& s){
        tables_.emplace_back(s);
    }

    void print(){
        std::cout<<"SubChapter: "<<name_<<std::endl;
        for(auto& s : paragraphs_){
            std::cout<<"Paragraf: ";
            s.print();
        }
        for(auto& s : images_){
            std::cout<<"Image with name: ";
            s.print();
        }
        for(auto& s : tables_){
            std::cout<<"Table with title: ";
            s.print();
        }
    }
private:
    std::string name_;
    std::vector<Pharagraph> paragraphs_;
    std::vector<Image> images_;
    std::vector<Table> tables_;

};




#endif