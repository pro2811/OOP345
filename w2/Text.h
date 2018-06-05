//TEXT.H
//SAVAN PANCHAL
//SRPANCHAL365@GMAIL.COM
#ifndef TEXT_H
#define TEXT_H
#include <iostream>
#include <iomanip>
#include <utility>
namespace sict{
    class Text{
        size_t c1;
        std::string* str1;
    public:
        Text();//default constructor
        Text(char *str2char);//receives string and shallow copy 
        Text (const Text & copy1);//copy constructor
        Text& operator=(const Text& copy2);//assignment operator
        Text (Text && move1);//move operator
        Text&& operator=(Text&& move2);//move assignment operator
        ~Text();//destructor
        size_t size() const;//stores size of object (bytes)
    };
}
#endif
