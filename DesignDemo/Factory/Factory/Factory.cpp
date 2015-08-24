#include "Factory.h"


Factory::Factory()
{
}


Factory::~Factory()
{
}

Product * Factory::create_product()
{
	Product * product;
	product = new ConcreteProduct();
	return product;
}

void Factory::test()
{

	Product *product = create_product();
	product->create_concrete_product();
}

int main()
{

	std::cout << "main() function is successful ..." << std::endl;
	Factory fortory;
	fortory.test();
	system("PAUSE");
	return 0;


}