#ifndef TAXPRODUCT_H
#define TAXPRODUCT_H
#include "Product.h"
#define HST 1.13
#define PST 1.08

namespace w7{
    class TaxProduct : public Product{
    double Tax;
public:
        TaxProduct(long int TempNum, double TempCost,double TempTax) : Product(TempNum, TempCost), Tax(TempTax){}
    double getCharge() const{ return Product::getCharge()*(Tax); }
    
    void display(std::ostream &os) const{
        Product::display(os);
        os<< (Tax == HST ? " HST" : " PST");
    }
};
}
#endif
