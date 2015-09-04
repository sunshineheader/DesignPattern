#include <iostream>
#include "Component.h"
#include "Composite.h"
#include "Left.h"
using namespace std;

int main()
{
	// 组合模式 Composite 重在表示
	std::cout << "main() function is initlaized sucessful ..." << std::endl;
	// it 是一块内存地址 
	// it 调用本身的 operation（）
	Left *it = new Left();
	it->operation();

	// composite 和 it 是 同一级的 都是 Component 的直接子类
	Composite *composite = new Composite();
	// add（） 函数的参数 是 Component * component 类型
	// 这里运用了 多态技术 
	composite->add(it);
	composite->operation();

	// Component 是 composite 和 left 的父类
	// 这里运用了 多态技术 
	Component * component = composite->getChild(0);
	component->operation();

	composite->remove(it);
	// 下面这句注释不能打开，一打开程序 运行之后会 throw out_of range exception
	// 因为 remove（）函数是底部是 vec.at（）函数
	//component = composite->getChild(0);

	system("PAUSE");
	return 0;

}