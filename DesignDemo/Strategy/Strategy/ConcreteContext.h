#pragma once
#include <iostream>
#include "Strategy.h"

/*
*�������Strategyģʽ�Ĺؼ���Ҳ��Strategyģʽ��Templateģʽ�ĸ����������ڡ�
*Strategyͨ������ϡ���ί�У���ʽʵ���㷨��ʵ�֣����칹����Templateģʽ���ȡ���Ǽ̳еķ�ʽ
*������ģʽ������Ҳ�Ǽ̳к��������ʵ�ֽӿ����õķ�ʽ������
*/
class ConcreteContext
{
public:
	ConcreteContext(Strategy * strategy);
	~ConcreteContext();
	void DoAction();
private:
	Strategy * _strategy;
};

