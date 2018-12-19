#ifndef INSERTIONSORT_H
#define INSERTIONSORT_H
#include<vector>
#include<iostream>

class InsertionSort {
public:
	InsertionSort();
	~InsertionSort();
	void InsertionSorter(int[], int);
	void InsertionSorter(std::vector<int>, int);
};


#endif // INSERTIONSORT_H
