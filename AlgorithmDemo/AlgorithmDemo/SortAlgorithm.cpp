#include "SortAlgorithm.h"
using namespace std;

SortAlgorithm::SortAlgorithm()
{
}

SortAlgorithm::~SortAlgorithm()
{
}
/**
 * 直接插入排序的一般形式
 * @param int dk 缩小增量，如果是直接插入排序，dk=1
**/
void SortAlgorithm::ShellInsertSort(int sort[], int size, int dk)
{
	for (int currcert = dk; currcert < size; ++currcert)
	{
		if (sort[currcert] < sort[currcert - dk])
		{
			int previous = currcert - dk;
			int temp = sort[currcert];
			sort[currcert] = sort[currcert - dk];
			while (temp < sort[previous])
			{
				sort[previous + dk] = sort[previous];
				previous -= dk;
			}
			sort[previous + dk] = temp;
		}
		// print 
		cout << sort[currcert];
	}
}
//时间复杂度：O（n ^ 2）.
void SortAlgorithm::InsertionSort(int sort[], int size)
{
	for (int currcert = 1; currcert < size; currcert++)
	{   
		// 循环遍历数组中的每一项
		if (sort[currcert] < sort[currcert - 1])
		{
			int previous = currcert - 1;// 记录数组中的上一个位置
			int temp = sort[currcert];  // temp记录着currcert的值
			sort[currcert] = sort[currcert - 1];// 将currcert-1位置的值赋给currcert位置
			while (temp<sort[previous])//
			{
				sort[previous + 1] = sort[previous];
				previous--;
			}
			sort[previous + 1] = temp;
		}
		cout << sort[currcert];
		// print
	}
}
void SortAlgorithm::HalfInsertSort(int sort[], int size)
{

}
void SortAlgorithm::InsertionSortWithPiquet(int sort[], int size)
{
}
void SortAlgorithm::BoubleInsertSort(int sort[], int size)
{
	for (int currcert = 0; currcert < size; currcert++)
	{
		for (int next = currcert; next < size; next++)
		{
			if (sort[currcert]>sort[next]) 
			{
				int temp = sort[currcert];
				sort[currcert] = sort[next];
				sort[next] = temp;
			}
		}
		cout << sort[currcert];
	}
}
void SortAlgorithm::SelectSort(int sort[], int size)
{
}
void SortAlgorithm::QuickSort(int sort[], int size)
{
}
void SortAlgorithm::HeapSort(int sort[], int size)
{
}

void SortAlgorithm::swap(int*a, int*b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
