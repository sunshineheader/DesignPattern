#include "SortAlgorithm.h"
using namespace std;

SortAlgorithm::SortAlgorithm()
{
}

SortAlgorithm::~SortAlgorithm()
{
}
/**
 * ֱ�Ӳ��������һ����ʽ
 * @param int dk ��С�����������ֱ�Ӳ�������dk=1
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
//ʱ�临�Ӷȣ�O��n ^ 2��.
void SortAlgorithm::InsertionSort(int sort[], int size)
{
	for (int currcert = 1; currcert < size; currcert++)
	{   
		// ѭ�����������е�ÿһ��
		if (sort[currcert] < sort[currcert - 1])
		{
			int previous = currcert - 1;// ��¼�����е���һ��λ��
			int temp = sort[currcert];  // temp��¼��currcert��ֵ
			sort[currcert] = sort[currcert - 1];// ��currcert-1λ�õ�ֵ����currcertλ��
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
