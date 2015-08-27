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
	/*Observer模式也称为发布－订阅（publish-subscribe），目标就是通知的发布者，观察者则是通知的订阅者（接受通知）
	在Observer模式的实现中，Subject维护一个list作为存储其所有观察者的容器。
	每当调用Notify操作就遍历list中的Observer对象，并广播通知改变状态（调用Observer的Update操作）。
	目标的状态state可以由Subject自己改变（示例），也可以由Observer的某个操作引起state的改变（可调用Subject的SetState操作）。Notify操作可以由Subject目标主动广播（示例），
	也可以由Observer观察者来调用（因为Observer维护一个指向Subject的指针）。
    运行示例程序，可以看到当Subject处于状态“old”时候，依赖于它的两个观察者都显示“old”，当目标状态改变为“new”的时候，依赖于它的两个观察者也都改变为“new”.*/
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