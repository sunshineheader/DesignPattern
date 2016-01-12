#include <iostream>

class Node {

public:
	Node();
	~Node();
public:
	inline void setValue(int value){ m_value = value; };
	inline int  getValue(){ return m_value; };
	void printValue();
public:
	int m_value;
	Node*m_left;
	Node*m_right;

};

