#include <iostream>
#include "Builder.h"
#include"ConcreteBuilder.h"
#include "Director.h"
#include "Product.h"
#include"ProductPart.h"
using namespace std;


int main()
{
	cout << "main() function is initlaized successful ..." << endl;

	//������ģʽ
	//director ���ص��� ConcreteBuilder()��Ľ���״̬ �� void 
	//ʵ�������� �ɷ��� ConcreteBuilder ���ͣ��õ���ͬ�׶ε� ConcreteBuilder * builder��
	Director *director = new Director(new ConcreteBuilder());
	director->Construct();

	/*ConcreteBuilder *cb = new ConcreteBuilder();
	cb->getProduct();*/
	system("PAUSE");
	return 0;

}