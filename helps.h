#pragma once
#include <algorithm>
#include <iostream>

using namespace std;

template <typename T>
void fill(T *arr, int size) {
	
	for (int i = 0; i < size; i++)
		{
			cout << "Enter " << i << " element: ";
			cin >> arr[i];
		}			
	system("@cls||clear");
}

template <typename T>
void print(T *arr, int size) {

	for (int i = 0; i < size; i++)
	{
		if (i) cout << " \033[30;47m|\033[0m ";
		cout << arr[i];
	}
	cout << endl;
}
