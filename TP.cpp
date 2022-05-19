#include <iostream>
#include <string>
#include <conio.h>
#include <algorithm>
#include "helps.h"
#include "BinarySearch.h"

using namespace std;

int main()
{

	for (;;) {
		system("@cls||clear");
		
		int size;

		try {
			cout << "Enter array size: ";
			cin >> size;

			if (size < 2) 
				throw string("\033[31mSize must be >= 2\033[0m");

		} catch (string myNum) {
			cout << myNum;
			cout << endl << endl << "Press any key" << endl;
			_getch();

			continue;
		}

		cout << "Choose type:" << endl << endl;
		cout << "0.Int" << endl;
		cout << "1.Float" << endl;
		cout << "2.Double" << endl;
		cout << "3.Char" << endl;
		cout << "4.Exit" << endl << endl;

		int command = 0;
		cout << "Type:";
		cin >> command;

		switch (command)
		{

			case 0: {
				
				int *arr = new int[size];

				fill<int>(arr, size);
				sort(arr, arr + size);
				print<int>(arr, size);
				int key = 0;

				cout << "Enter key:";
				cin >> key;
				Search(arr, size, key);
				break;
			}

			case 1: {

				float *arr = new float[size];
				fill<float>(arr, size);
				sort(arr, arr + size);
				print<float>(arr, size);

				float key = 0;

				cout << "Enter key:";
				cin >> key;
				Search(arr, size, key);
				break;
			}

			case 2: {

				double *arr = new double[size];
				fill<double>(arr, size);
				sort(arr, arr + size);
				print<double>(arr, size);

				double key = 0;

				cout << "Enter key:";
				cin >> key;
				Search(arr, size, key);
				break;
			}

			case 3: {

				char *arr = new char[size];

				fill<char>(arr, size);
				sort(arr, arr + size);
				print<char>(arr, size);
				char key = 0;

				cout << "Enter key(char):";
				cin >> key;
				Search(arr, size, key);
				break;
			}

			case 4: {
				exit(0);
			}
		}

		cout << endl << endl << "Press any key" << endl;
		_getch();
	}
}

