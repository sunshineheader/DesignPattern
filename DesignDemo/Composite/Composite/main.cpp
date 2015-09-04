#include <iostream>
#include "Component.h"
#include "Composite.h"
#include "Left.h"
using namespace std;

int main()
{
	// ���ģʽ Composite ���ڱ�ʾ
	std::cout << "main() function is initlaized sucessful ..." << std::endl;
	// it ��һ���ڴ��ַ 
	// it ���ñ���� operation����
	Left *it = new Left();
	it->operation();

	// composite �� it �� ͬһ���� ���� Component ��ֱ������
	Composite *composite = new Composite();
	// add���� �����Ĳ��� �� Component * component ����
	// ���������� ��̬���� 
	composite->add(it);
	composite->operation();

	// Component �� composite �� left �ĸ���
	// ���������� ��̬���� 
	Component * component = composite->getChild(0);
	component->operation();

	composite->remove(it);
	// �������ע�Ͳ��ܴ򿪣�һ�򿪳��� ����֮��� throw out_of range exception
	// ��Ϊ remove���������ǵײ��� vec.at��������
	//component = composite->getChild(0);

	system("PAUSE");
	return 0;

}