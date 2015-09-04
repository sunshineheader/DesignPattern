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
	//�о�������ģʽ��Construct()�ķ�������Ӧ���� Builder ָ������
	_builder->BuildPartA("A, UserDef");
	_builder->BuildPartB("B, UserDef");
	_builder->BuildPartC("C, UserDef");
}
