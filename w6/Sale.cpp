#include <vector>
#include <iostream>
#include <fstream>
#include <iostream>
#include "Sale.h"

using namespace std;

namespace w7{
    
    Sale::Sale(const char *fname){
        ifstream sp(fname, ios::out);
        
	if(!sp){ cout<<"Error!!"<<fname<<endl;}
	else{
		while(sp){
			prod.push_back(readProduct(sp));
		}
	}
        }

 	Sale::~Sale(){
		
		for(auto s = 0u; s< (prod.size()-1);s++)
			delete [] prod[s];
	}
        
        void Sale::display(ostream &os) const{
            double s = 0;
            os << "Product No      Cost Taxable" << endl;
    	   
            for (auto i = 0u; i <(prod.size()-1); i++) {
                 os <<*prod[i]<<endl;
                 s += prod[i]->getCharge();
           }
            
            os << "     Total" << setw(10) <<s << endl;
        }
       
}
    


