#pragma once
#include <iostream>
using namespace std;
class Singleton{
public:
	Singleton();
	~Singleton();
	static Singleton*getInstance();
	void test();
private:
	static Singleton*_instance;
};

