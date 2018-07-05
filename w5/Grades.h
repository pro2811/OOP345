#ifndef SICT_GRADES_H_
#define SICT_GRADES_H_
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;

namespace sict{
    
    class Grades
    {
        string* stdid;
        double* grade;
        int num;
        
    public:
        
        Grades(){
            stdid = nullptr;
            grade = nullptr;
            num = 0;
        }
        
        Grades(char* f);
        
        template<typename T>
        void displayGrades(std::ostream& os, T t) const{
            for (int i = 0; i < num; i++)
                os << stdid[i] << " " << fixed << setprecision(2) << grade[i] << " " << t(grade[i]) << endl;
        };
        
        Grades(const Grades& copy) = delete;
        Grades(Grades&& move) = delete;
        Grades& operator=(const Grades& copy) = delete;
        Grades&& operator=(Grades&& move) = delete;
    };
}

#endif

