#include <iostream>
#include "Subject.h"
#include "ConcreteSubject.h"
#include "Proxy.h"
using namespace std;

int main()
{
	// ����ģʽ
	cout << "main() function is initlaized successful ..." << endl;
	Subject * subject = new ConcreteSubject();
	Proxy *proxy = new Proxy(subject);
	proxy->request();
	system("PAUSE");
	return 0;
}