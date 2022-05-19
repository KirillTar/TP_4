#pragma once
#include <iostream>
#include <algorithm>
#include "windows.h" 

using namespace std;

template <typename T>
void Search(T * arr, int size, T& key)
{
	double l = 0;
	double r = size - 1;

	while (l <= r) {
		int mid = (l + r) / 2;
		double midVal = arr[mid];

		if (midVal < key)
			l = mid + 1;
		else if (midVal > key)
			r = mid - 1;
		else 
		{
			cout << "Index: " << key << " in array is: " << mid;
			return;
		}
	}
	cout << "Not founded";
}