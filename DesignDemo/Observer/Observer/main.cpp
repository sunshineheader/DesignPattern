#include <iostream>
#include "Subject.h"
#include "ConcreteSubject.h"
#include "Observer.h"
#include "ConcreteObserverFirst.h"
#include "ConcreteObserverSecond.h"
using namespace std;


int main()
{
	cout << "main() function is initlaized successful ..." << endl;
	/*ObserverģʽҲ��Ϊ���������ģ�publish-subscribe����Ŀ�����֪ͨ�ķ����ߣ��۲�������֪ͨ�Ķ����ߣ�����֪ͨ��
	��Observerģʽ��ʵ���У�Subjectά��һ��list��Ϊ�洢�����й۲��ߵ�������
	ÿ������Notify�����ͱ���list�е�Observer���󣬲��㲥֪ͨ�ı�״̬������Observer��Update��������
	Ŀ���״̬state������Subject�Լ��ı䣨ʾ������Ҳ������Observer��ĳ����������state�ĸı䣨�ɵ���Subject��SetState��������Notify����������SubjectĿ�������㲥��ʾ������
	Ҳ������Observer�۲��������ã���ΪObserverά��һ��ָ��Subject��ָ�룩��
    ����ʾ�����򣬿��Կ�����Subject����״̬��old��ʱ�����������������۲��߶���ʾ��old������Ŀ��״̬�ı�Ϊ��new����ʱ�����������������۲���Ҳ���ı�Ϊ��new��.*/
	Subject *subject = new ConcreteSubject();
	Observer *observer1 = new ConcreteObserverFirst(subject);
	Observer *observer2 = new ConcreteObserverSecond(subject);
	subject->SetState("old 1");
	subject->Notify();
	subject->SetState("new 1");
	subject->Notify();
	observer1->Update(subject);
	observer2->Update(subject);
	system("PAUSE");
	return 0;

}