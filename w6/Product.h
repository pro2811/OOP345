#ifndef PRODUCT_H
#define PRODUCT_H
#include "iProduct.h"
namespace w7{
  
    class Product : public iProduct{
	   
        long int number;
        double cost;
	    public:
        Product(long int TempNum, double TempCost) : number(TempNum), cost(TempCost) { }
        double getCharge() const{return cost;}
        void display(std::ostream &) const;
    };
    
}
#endif
