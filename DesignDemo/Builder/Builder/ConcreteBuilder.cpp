#include "ConcreteBuilder.h"


ConcreteBuilder::ConcreteBuilder()
{
}


ConcreteBuilder::~ConcreteBuilder()
{
}

void ConcreteBuilder::BuildPartA(const string & buildPart)
{
	string s(buildPart);
	cout <<"this is building part of "<< s << endl;
}
void ConcreteBuilder::BuildPartB(const string & buildPart)
{
	string s(buildPart);
	cout << "this is building part of " << s << endl;
}
void ConcreteBuilder::BuildPartC(const string & buildPart)
{
	string s(buildPart);
	cout << "this is building part of " << s << endl;
}
Product * ConcreteBuilder::getProduct()
{
	BuildPartA("A, PreDef");
	BuildPartB("B, PreDef");
	BuildPartC("C, PreDef");
	return new Product();
}