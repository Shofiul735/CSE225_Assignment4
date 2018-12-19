#include"BubbleSort.h"

BubbleSort::BubbleSort() {

}
BubbleSort::~BubbleSort() {

}
void BubbleSort::BubbleSorter(int *array, int n) {
	bool swaped = true;
	int j = 0, temp, count = 1;
	while (swaped) {
		swaped = false;
		j++;
		for (int i = 0; i < n - j; i++) {
			if (array[i] > array[i + 1]) {
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swaped = true;
			}
			cout << "Step " << count << ": ";
			for (int i = 0; i < n; i++) {
				cout << array[i] << " ";
			}
			cout << endl;
			count++;
		}

	}
}