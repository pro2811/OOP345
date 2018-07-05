#include <iostream>
#include "Grades.h"
#include "Letter.h"
using namespace sict;

int main(int argc, char* argv[])
{
    std::cout << "Command Line : ";
    for (int i = 0; i < argc; i++) {
        std::cout << argv[i] << ' ';
    }
    std::cout << std::endl;
    
    if (argc == 1) {
        std::cerr <<
        "\n*** Insufficient number of arguments ***\n";
        std::cerr << "Usage: " << argv[0] << " fileName \n";
        return 1;
    }
    else if (argc != 2) {
        std::cerr << "\n*** Too many arguments ***\n";
        std::cerr << "Usage: " << argv[0] << " fileName \n";
        return 2;
    }
    
    
    sict::Grades grades(argv[1]);
    // lambda expression for converting to letter
    auto letter = [](double grade)->std::string
    {
        string strl;
        Letter lt;
        if (grade >= 90) lt = Apl ;
        else if (grade >= 80) lt = A;
        else if (grade >= 75) lt = Bpl;
        else if (grade >= 70) lt = B;
        else if (grade >= 65) lt = Cpl;
        else if (grade >= 60) lt = C;
        else if (grade >= 55) lt = Dpl;
        else if (grade >= 50) lt = D;
        else lt = F;
        strl = NtoAlp(lt);
        return strl;
    };
    
    grades.displayGrades(std::cout, letter);
    std::cerr << argv[0] << ": Failed to open File "
    << argv[1] << "\n";
    return 2;
    
}
