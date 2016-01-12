#include "Algorithm.h"
#include "SortAlgorithm.h"
#include "Node.h"
using namespace std;
int main()
{
	Algorithm algorithm;
	//algorithm.sellChicken();
	//algorithm.genRabbit();
	//algorithm.printNumber();
	//algorithm.printFlowerNumber();
	//algorithm.printFactor(100);
	//algorithm.printSort();
	//algorithm.sortFromSmallToBig(5,3,6);
	//algorithm.sortFromSmallToBig('f','d','a');
	int sort[9]{2, 1, 4, 5, 6, 7, 8, 9, 3};
	SortAlgorithm m;
	//m.BoubleInsertSort(sort,9);
	m.InsertionSort(sort, 9);

	system("PAUSE");
	return 0;
}