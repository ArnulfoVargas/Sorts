#include <iostream>
#include <array>
#include <limits.h>

void BubbleSort(int* array, int size) {
	bool ordered = false;
	int holder = { 0 };

	while (!ordered) {

		ordered = true;
		for (int i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1]) {
				holder = array[i];

				array[i] = array[i + 1];
				array[i + 1] = holder;

				ordered = false;
			}
		}
	}
}

void InsertionSort(int* array, int size) {
	for (int i = 1; i < size; i++)
	{
		int key = array[i];
		int j = i - 1;

		while (key < array[j] && j >= 0)
		{
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}
}

void SelectionSort(int* array, int size) {
	int holder{ 0 };
	int minIndex{ 0 };
	int minVal = INT_MAX;

	for (int i = 0; i < size; i++)
	{
		minVal = INT_MAX;

		for (int j = i; j < size; j++) {

			if (array[j] < minVal) {
				minVal = array[j];
				minIndex = j;
			}
		}

		holder = array[i];
		array[i] = minVal;
		array[minIndex] = holder;
	}
}

void main() {
	int nums[9] = { 10, 32, 21, 5, 49, 31, 11, 40, 1 };

	int i = -1;
	int numToFind{ 0 };

	for (int num : nums)
	{
		std::cout << num << " ";
	}

	std::cout << std::endl;

	InsertionSort(nums, 9);

	for (int num : nums)
	{
		std::cout << num << " ";
	}

	std::cout << std::endl;

	std::cout << "What number you want?\n";

	std::cin >> numToFind;

	for (int x = 0; x < 9; x++) {
		if (nums[x] == numToFind) {
			i = x;
			break;
		}
	}

	if (i < 0) {
		std::cout << "Number not found";
	}
	else
	{
		std::cout << "Number found at: " << i;
	}
}