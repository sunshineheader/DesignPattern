#ifndef Algorithm_H_H
#define Algorithm_H_H
#include <iostream>
class Algorithm {

public:
	Algorithm();
	~Algorithm();
public:
	// 百钱买百鸡
	void sellChicken();
	// 兔子问题
	void genRabbit();
	int  rabbitHelp(int mouth);
public:
	// 判断101 - 200之间有多少个素数
	void printNumber();
	// 打印出所有的 "水仙花数 
	void printFlowerNumber();
	// 分解质因数
	void printFactor(int number);
	// 排列
	void printSort();
public:
	void sortFromSmallToBig(int x, int y, int z);
	void sortFromSmallToBig(char a, char b, char c);
private:

};


#endif