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
        Text();
        Text(char *str2char);
        Text (const Text & copy1);
        Text& operator=(const Text& copy2);
        Text (Text && move1);
        Text&& operator=(Text&& move2);
        ~Text();
        size_t size() const;
    };
}
#endif
