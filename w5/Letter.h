#ifndef SICT_LETTER_H_
#define SICT_LETTER_H
#include <iostream>
#include <string>
namespace sict
{    enum Letter{ Apl, A, Bpl, B, Cpl,C, Dpl, D, F};//enumeration
    std::string NtoAlp(Letter& ltobj)
    {
        switch (ltobj) {
            case Apl : return "A+";
                break;
            case A : return "A";
                break;
            case Bpl : return "B+";
                break;
            case B : return "B";
                break;
            case Cpl : return "C+";
                break;
            case C : return "C";
                break;
            case Dpl : return "D+";
                break;
            case D : return "D";
                break;
            case F : return "F";
                break;
                return 0;
        }
    }
}

#endif

