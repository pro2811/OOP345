#include <iostream>
#include <string>
#include <fstream>
#include "Grades.h"
using namespace std;

namespace sict{
    
    Grades::Grades(char* f)
    {
        try
        {
            ifstream fs(f);
            if (fs.is_open())
            {
                int line = 0;
                string s;
                
                while (getline(fs, s)){
                    line++;
                }
                fs.clear();
                fs.seekg(0);
                
                num = line;
                stdid = new string[num];
                grade = new double[num];
                
                for (int i = 0; i < num; i++){
                    fs >> stdid[i];
                    fs >> grade[i];
                }
                fs.close();
            }
            else throw "ERROR";
        }
        catch (const char* mg)
        {
            cerr << mg << endl;
            exit(0);
        }
    }
}

