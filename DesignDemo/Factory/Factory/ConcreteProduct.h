#pragma once
#include <iostream>
#include "Product.h"
using namespace std;
class ConcreteProduct : public Product {
public:
	ConcreteProduct();
	~ConcreteProduct();
	virtual void create_concrete_product();
	
};

