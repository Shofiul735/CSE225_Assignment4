#ifndef MERGESORT_H
#define MERGESORT_H
#include<iostream>
#include<vector>
using namespace std;

class MergeSort {
public:
	MergeSort();
	~MergeSort();
	void MergeSorter(int[], int);
	void MergeSorter(vector<int>, int);
};

#endif // MERGESORT_H
