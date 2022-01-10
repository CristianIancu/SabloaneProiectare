#ifndef ALIGN_CENTER_HPP
#define ALIGN_CENTER_HPP

#include"AlignStrategy.hpp"

class AlignCerter : AlignStrategy{
public:
    AlignCenter(){}

    void render(Paragraph p, std::string context){
        int freeSpace = (TEXT_MAX_LENGTH - p.getText().size())/2;

        std::string beforeText="",afterText="";
        for(int index=0;index<freeSpace;index++){
            beforeText += " ";
        }
        freeSpace = TEXT_MAX_LENGTH - p.getText().size() - freeSpace;
        for(int index=0;index<freeSpace;index++){
            afterText += " ";
        }

        p.setText(beforeText + p.getText() + afterText);
    }
};

#endif