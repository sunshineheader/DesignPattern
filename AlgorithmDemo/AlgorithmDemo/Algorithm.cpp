#include "Algorithm.h"
using namespace std;
Algorithm::Algorithm()
{
}

Algorithm::~Algorithm()
{
}
// 百钱买百鸡
// 公鸡5文钱一只，母鸡3文钱一只，小鸡3只一文钱，
// 用100文钱买一百只鸡, 其中公鸡，母鸡，小鸡都必须要有，问公鸡，母鸡，小鸡要买多少只刚好凑足100文钱。
void Algorithm::sellChicken() {
    //x + y + z = 100;
	//5 * x + 3 * y + z / 3 = 100;
	int x = 0; int y = 0; int z = 0;
	for (int x = 0; x < 20; x++) {
		for (int y = 0; y < 33; y++) {
			z = 100 - x - y;
			if ((z % 3 == 0) && (5 * x + 3 * y + z / 3 == 100)) {
				cout << "公鸡的数量是:" <<x<< ",母鸡的数量是:" <<y<< ",小鸡的数量是:" <<z<< endl;
			}
		}
	}
}
// 题目：古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？ 
void Algorithm::genRabbit() {
	// 第一个月的兔子 1 ；第二个月的兔子 1 ； 第三个月的兔子 2
	// 第四个月的兔子 3   第五个月的兔子 5    第六个月的兔子 8
	// 当月数大于3时 （x-1）+（x-2）
	int i = 0;
	for (int i = 0; i <=100; i++){
		cout << "第" << i << "个月的兔子" << rabbitHelp(i) << endl;
	}

}
int Algorithm::rabbitHelp(int mouth) {
	if (mouth==0){
		return 0;
	}
	else if(mouth == 1 || mouth == 2) {
		return 1;
	}
	else{
		return rabbitHelp(mouth - 1) + rabbitHelp(mouth - 2);
	}
}
//题目：判断101 - 200之间有多少个素数，并输出所有素数
void Algorithm::printNumber() {
	int count = 0;
	for (int number = 101; number < 201; number++) {
		if (number%2==1){
			count++;
			cout << "number is :" << number << endl;
		}
	}
	cout << "count is :" << count << endl;
}
//题目：打印出所有的 "水仙花数 "，
//所谓 "水仙花数 "是指一个三位数，其各位数字立方和等于该数本身。
//例如：153是一个 "水仙花数 "，因为153 = 1的三次方＋5的三次方＋3的三次方
//程序分析：利用for循环控制100-999个数，每个数分解出个位，十位，百位
void Algorithm::printFlowerNumber() {

	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			for (int z = 0; z < 10; z++) {
				int mx = x * 100;
				int my = y * 10;
				int mz = z;
				int mresqut = x*x*x + y*y*y + z*z*z;
				if (mx+my+mz==mresqut)
				{
					cout << "水仙花数是:" << mx + my + mz << endl;
				}
			}
		}
	}
}
//题目：将一个正整数分解质因数。
//例如：输入90, 打印出90 = 2 * 3 * 3 * 5。   
//程序分析：对n进行分解质因数，应先找到一个最小的质数k，然后按下述步骤完成：
void Algorithm::printFactor(int number){
	cout << "number is:" << number << endl;
	for (int num = 2; num < number; num++) {
		if (number%num == 0) {
			number = number / num;
			cout << num << "*";
			num--;
		}
	}
	cout << number << endl;
}

//题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？ 
// 1.程序分析：可填在百位、十位、个位的数字都是1、2、3、4。
// 组成所有的排列后再去 掉不满足条件的排列。列后再去 掉不满足条件的排列。
void Algorithm::printSort(){
	int count = 0;
	int mcount = 0;
	for (int x = 1; x < 5; x++) {
		for (int y = 1; y < 5; y++) {
			for (int z = 1; z < 5; z++)	{
				if (x != y&&x != z&&y != z) {
					cout << x << y << z << endl;
					count++;
					mcount++;
					if (count==3){
						cout << endl;
						count = 0;
					}
				}
			}
		}
	}
	cout << mcount<<endl;
}
void Algorithm::sortFromSmallToBig(int x, int y, int z) {
	int temp;
	if (x > y) {
		temp = x; x = y; y = temp;
	} 
	if (x > z) {
		temp = x; x = z; z = temp;
	}
	if (y > z) {
		temp = y; y = z; z = temp;
	}
	cout << x << "," << y << "," << z << endl;
}
void Algorithm::sortFromSmallToBig(char a, char b, char c){
	char temp;
	if (a > b){
		temp = a; a = b; b = temp;
	} 
	if (a > c){
		temp = a; a = c; c = temp;
	} 
	if (b > c){
		temp = b; b = c; c = temp;
	}
	cout << a << "," << b << "," << c << endl;

}

