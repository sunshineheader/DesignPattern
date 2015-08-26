#include "FlyWeightFactory.h"


FlyWeightFactory::FlyWeightFactory()
{
}


FlyWeightFactory::~FlyWeightFactory()
{
}

FlyWeight * FlyWeightFactory::getFlyWeight(const string & key)
{
	vector<FlyWeight*>::iterator iter;
	for (iter = _fly.begin(); iter != _fly.end();iter++)
	{
		if (key==(*iter)->getInsicState())
		{
			cout << "already created by users...." << endl;
			return (*iter);
			break;
		}
	}

	FlyWeight* flyWeight = new ConcreteFlyWeight(key);
	_fly.push_back(flyWeight);
	return flyWeight;
}