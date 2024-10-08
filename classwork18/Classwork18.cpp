// Classwork18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "bubbleSort.h"
#include "print.h"

int main()
{
	int arr[5] = { 1,5,2,6,8 };
	bubbleSort(arr, 5);
	print(arr, 5);

}
