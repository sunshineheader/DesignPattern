#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "FlyWeight.h"
#include"ConcreteFlyWeight.h"

class FlyWeight;

class FlyWeightFactory {

public:
	FlyWeightFactory();
	~FlyWeightFactory();
	FlyWeight*getFlyWeight(const string & key);
private:
	vector<FlyWeight*>_fly;
};

