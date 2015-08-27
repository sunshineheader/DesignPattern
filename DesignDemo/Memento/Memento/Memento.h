#pragma once
#include <iostream>
#include <string>
#include "Originator.h"
using namespace std;

class Memento {

private:
	/*������ؼ��ĵط�����OriginatorΪfriend�࣬���Է����ڲ���Ϣ�����������಻�ܷ���*/
	friend class Originator;
	typedef string State;
	Memento();
	Memento(const State & state);
	~Memento();
	void SetState(const State & state);
	State GetState();
private:
	State m_state;


};

