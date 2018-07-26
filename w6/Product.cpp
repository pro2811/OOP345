#include <iomanip>
#include "Product.h"
#include "TaxProduct.h"

using namespace std;
namespace w7{
    iProduct* readProduct(std::ifstream & sp){
        iProduct *pro = nullptr;
        long int pnum;
        double pcost;
        char ndl;
    sp >> pnum >> pcost;
    ndl = sp.get();
    
    if(ndl == ' '){
        sp>>ndl;
        
        if(ndl == 'H'){
            TaxProduct *Tpro = new TaxProduct(pnum, pcost, HST);
            pro = Tpro;
        }else if(ndl == 'P'){
            TaxProduct *Tpro = new TaxProduct(pnum, pcost, PST);
            pro = Tpro;
        }
    }else{
            Product *NTpro = new Product(pnum,pcost);
            pro = NTpro;
        }
        return pro;
    }
        
        std::ostream &operator<<(std::ostream &os,const iProduct &p){
       		 p.display(os);
      		 return os;
        }
    
        void Product::display(std::ostream &os) const{
            
        os<< setw(10)<< number<< right<< setw(10)<< std::fixed<< std::setprecision(2)<<Product::getCharge();
   }
}
