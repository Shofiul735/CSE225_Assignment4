#include<iostream>
#include<vector>
#include"SelectionSort.h"
#include"InsertionSort.h"
#include"MergeSort.h"
#include"BubbleSort.h"


using namespace std;

int main() {
	SelectionSort a;
	InsertionSort b;
	MergeSort c;
	BubbleSort d;
	int arr[] = { 14,33,27,10,35,19,48,44 };
	vector<int> arrVector;
	arrVector.push_back(14);
	arrVector.push_back(33);
	arrVector.push_back(27);
	arrVector.push_back(10);
	arrVector.push_back(35);
	arrVector.push_back(19);
	arrVector.push_back(48);
	arrVector.push_back(44);
	cout << "********************Selection Sort********************" << endl;
	a.SelectionSorter(arr, sizeof(arr) / sizeof(arr[0]));
	cout << "********Selection Sort Using Vector*******" << endl;
	a.SelectionSorter(arrVector, arrVector.size());
	cout << "********************Insertion Sort********************" << endl;
	int arr1[] = { 14,33,27,10,35,19,48,44 };
	b.InsertionSorter(arr1, sizeof(arr1) / sizeof(arr1[0]));
	cout << "*******Insertion Sort Using Vector*******" << endl;
	b.InsertionSorter(arrVector, arrVector.size());
	int arr2[] = { 14,33,27,10,35,19,48,44 };
	cout << "********************Merge Sort********************" << endl;
	c.MergeSorter(arr2, sizeof(arr2) / sizeof(arr2[0]));
	cout << "*******Merge Sort Using Vector*******" << endl;
	c.MergeSorter(arrVector, arrVector.size());
	int arr3[] = { 14,33,27,10,35,19,48,44 };
	cout << "********************Bubble Sort********************" << endl;
	d.BubbleSorter(arr3, sizeof(arr3) / sizeof(arr[0]));
	cout << "*******Bubble Sort Using Vector*******" << endl;
	d.BubbleSorter(arrVector, arrVector.size());
	return 0;
}
