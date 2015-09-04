#pragma once
class Component {

public:
	Component();
	virtual ~Component();
public:
	virtual void operation() = 0;
	virtual void add(const Component & component);
	virtual void remove(const Component & component);
	virtual Component * getChild(int index);

};

