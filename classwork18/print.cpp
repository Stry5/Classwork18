
#include "print.h"
#include <iostream>
void print(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
}
