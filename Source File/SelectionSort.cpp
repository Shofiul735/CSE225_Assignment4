#include"SelectionSort.h"
#include<iostream>
SelectionSort::SelectionSort() {

}
SelectionSort::~SelectionSort() {

}
inline void Swap(int& a, int& b) {
	int k = a;
	a = b;
	b = k;
}
void SelectionSort::SelectionSorter(int arr[], int arr_size) {
	for (int i = 0; i < arr_size - 1; ++i) {
		int min = i;
		for (int j = i + 1; j < arr_size; ++j)
			if (arr[j] < arr[min])
				min = j;
		Swap(arr[min], arr[i]);
		std::cout << "Step " << i + 1 << ": ";
		for (int i = 0; i < arr_size; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;

	}
}
void SelectionSort::SelectionSorter(vector<int>arr, int arr_size) {
	for (int i = 0; i < arr_size - 1; ++i) {
		int min = i;
		for (int j = i + 1; j < arr_size; ++j)
			if (arr[j] < arr[min])
				min = j;
		Swap(arr[min], arr[i]);
		std::cout << "Step " << i + 1 << ": ";
		for (int i = 0; i < arr_size; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;

	}
}
