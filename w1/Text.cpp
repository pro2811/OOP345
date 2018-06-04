#include <iostream>
#include <fstream>
#include <iomanip>
#include <utility>
#include "Text.h"

using namespace sict;

Text::Text() : c1(0), str1(nullptr) {} //constructor

size_t Text::size() const{ return c1;}  //stores size of the object

Text::Text(char *str2char):c1(0){
    std::fstream in(str2char, std::ios::in);
    
    if(in.is_open()){
        std::string l1;
        while (getline(in,l1)){
            c1++;
        }
        str1 = new std::string[c1];
        for(size_t a=0; a<c1; a++){
            getline(in, str1[a]);
            auto str2 = str1[a].find('\r');
            if(str2 != std::string::npos)
               str1[a].erase(str2);
            in.close();
        }
    }else{
        std::cerr<<"Can't open file"<<str1<< std::endl;
        Text();
    }
}

Text::Text (const Text & copy1):c1(0),str1(nullptr){
    *this = copy1;
}

Text& Text::operator= (const Text& copy2){
    if(this != &copy2){
        delete[] str1;
        str1 = nullptr;
        c1 =0;
        c1 = copy2.c1;
        
        str1 = new std::string[c1];
        for(size_t s=0; s<c1;s++)
            str1[s] = copy2.str1[s];
    }
    return *this;
}

Text::Text (Text && move1):c1(0),str1(nullptr){
    *this = std::move(move1);
}

Text&& Text::operator=(Text&& move2){
    if (this != &move2) {
        delete[] str1;
        
        str1 = move2.str1;
        c1 = move2.c1;
        
        move2.str1 = nullptr;
        move2.c1 = 0;
    }
    return std::move(*this);
}

Text::~Text(){
    delete[] str1;
}

