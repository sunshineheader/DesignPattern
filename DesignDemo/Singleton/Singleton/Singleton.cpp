#include "Singleton.h"

Singleton * Singleton::_instance = nullptr;

Singleton::Singleton()
{
}


Singleton::~Singleton()
{
}

Singleton * Singleton::getInstance()
{
	if (nullptr==_instance)
	{
		_instance = new Singleton();
	}

	return _instance;
}
void Singleton::test()
{
	cout << "create singleton successful ..." << endl;
}

int main(){
	std::cout << "main() function is successful ..." << std::endl;
	//singleton 
	Singleton _singleton;
	_singleton.test();
	//singleton
	Singleton::getInstance()->test();
	system("PAUSE");
	return 0;
}