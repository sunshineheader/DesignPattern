#pragma once
#include <iostream>
#include "Product.h"
#include "ConcreteProduct.h"
using namespace std;
class Factory{
public:
	Factory();
	~Factory();
	Product* create_product();
	void test();

};

