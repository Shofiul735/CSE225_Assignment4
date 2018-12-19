#include<iostream>
#include"BubbleSort.h"
using namespace std;

int main() {
	BubbleSort bs;
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
	bs.BubbleSorter(arr, sizeof(arr) / sizeof(arr[0]);
}