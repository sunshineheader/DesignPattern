#include "ProductPart.h"


ProductPart::ProductPart()
{
	cout << "build ProductPart of ..." << endl;
}


ProductPart::~ProductPart()
{
}

ProductPart * ProductPart::BuildPart()
{
	return new ProductPart();
}
