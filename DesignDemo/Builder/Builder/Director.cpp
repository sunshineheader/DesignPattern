#include "Director.h"


Director::Director()
{
}
Director::Director(Builder*builder)
{
	_builder = builder;
}


Director::~Director()
{
	delete _builder;
	_builder = nullptr;
}
void Director::Construct()
{
	//感觉建造者模式，Construct()的返回类型应该是 Builder 指针类型
	_builder->BuildPartA("A, UserDef");
	_builder->BuildPartB("B, UserDef");
	_builder->BuildPartC("C, UserDef");
}
