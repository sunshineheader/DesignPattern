#pragma once
#include <iostream>
#include <string>
using namespace std;
class FlyWeight {
	// 自由组件
public:
	FlyWeight();
	virtual~FlyWeight();
	virtual void operation(const string & extrinsicState);
	string getInsicState();
protected:
	FlyWeight(const string & intrinsicState);
private:
	string _intrinsicState;
};

