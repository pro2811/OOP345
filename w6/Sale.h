#ifndef SALE_H
#define SALE_H
#include <vector>
#include <iomanip>
#include "Product.h"
#include "TaxProduct.h"

namespace w7{
    class Sale{
        std::vector <iProduct*> prod;
    public:
        Sale(const char* fname);
        void display(std::ostream &os) const;
	~Sale();
    };
}
#endif
