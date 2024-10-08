#include "bubbleSort.h"
void bubbleSort(int arr[], int size) {
	int temp = 0;
	for (int i = 0; i < size; i++) {

		for (int x = i + 1; x < size; x++) {

			if (arr[i] > arr[x]) {

				temp = arr[i];
				arr[i] = arr[x];
				arr[x] = temp;
			}
		}
	}


}