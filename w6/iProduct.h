#ifndef _I_PRODUCT_H_
#define _I_PRODUCT_H_

// Workshop 7 - STL Containers
// iProduct.h

#include <iostream>
#include <fstream>

namespace w7 {
    
    class iProduct {
    public:
        virtual double getCharge() const = 0;
        virtual void display(std::ostream&) const = 0;
    };
    std::ostream& operator<<(std::ostream &, const iProduct &);
    iProduct* readProduct(std::ifstream&);
}
#endif
