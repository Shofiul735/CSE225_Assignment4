#include"InsertionSort.h"

InsertionSort::InsertionSort() {

}
InsertionSort::~InsertionSort() {

}
void InsertionSort::InsertionSorter(int arr[], int arr_size) {
	if (arr_size > 1) {
		int size = arr_size;
		for (int i = 0; i < size; i++) {
			int j = i - 1;
			int key = arr[i];
			while (j >= 0 && arr[j] > key) {
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = key;
			std::cout << "Step " << i + 1 << ": ";
			for (int i = 0; i < arr_size; i++)
				std::cout << arr[i] << " ";
			std::cout << std::endl;
		}
	}
}
void InsertionSort::InsertionSorter(std::vector<int> arr, int arr_size) {
	if (arr_size > 1) {
		int size = arr_size;
		for (int i = 0; i < size; i++) {
			int j = i - 1;
			int key = arr[i];
			while (j >= 0 && arr[j] > key) {
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = key;
			std::cout << "Step " << i + 1 << ": ";
			for (int i = 0; i < arr_size; i++)
				std::cout << arr[i] << " ";
			std::cout << std::endl;
		}
	}
}
