#include "Product.h"


Product::Product()
{
	ProducePart();
	cout << "return a product ..." << endl;
}


Product::~Product()
{
}

void Product::ProducePart()
{

	cout << "build part of product ..." << endl;
}