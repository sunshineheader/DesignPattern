#ifndef SortAlgorithm_H_H
#define SortAlgorithm_H_H
#include <iostream>
class SortAlgorithm
{
public:
	SortAlgorithm();
	~SortAlgorithm();
public:
	void ShellInsertSort(int sort[], int size,int dk);
	void InsertionSort(int sort[], int size);
	void HalfInsertSort(int sort[], int size);
	void InsertionSortWithPiquet(int sort[], int size);
	void BoubleInsertSort(int sort[], int size);
	void SelectSort(int sort[], int size);
	void QuickSort(int sort[], int size);
	void HeapSort(int sort[], int size);
public:
	void swap(int*a,int*b);


};


#endif