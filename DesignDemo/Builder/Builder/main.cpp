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

	//建造者模式
	//director 返回的是 ConcreteBuilder()类的建造状态 是 void 
	//实际运用中 可返回 ConcreteBuilder 类型，拿到不同阶段的 ConcreteBuilder * builder；
	Director *director = new Director(new ConcreteBuilder());
	director->Construct();

	/*ConcreteBuilder *cb = new ConcreteBuilder();
	cb->getProduct();*/
	system("PAUSE");
	return 0;

}