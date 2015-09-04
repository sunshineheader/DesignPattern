#pragma once
#include <iostream>
#include <vector>
#include "Component.h"
using namespace std;
class Composite : public Component {
public:
	Composite();
	~Composite();
public:
	void operation();
	void add(Component * component);
	void remove(Component * component);
	Component * getChild(int index);
private:
	vector <Component*>Vec;

};

