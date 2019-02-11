/*Insertion Sort
Author:Jordan
Date: Feb 10, 2019
*/


#include <iostream>
using namespace std;

int main() {

	const int MAX_ELEMENTS = 10;
	int elementCount = MAX_ELEMENTS;
	int arr[MAX_ELEMENTS] = { 3, 5, 1, 10, 4, 6, 8, 7, 9, 2 };
		
	int min_index = 0;
	int min;
	int j;


	for (int i = 1; i < elementCount; i++)
	{
		min = arr[i];
		j = i - 1;

		while (j>=0 && arr[j] > min )
		{
			arr[j + 1] = arr[j]; // shift right
			j = j - 1;
		}
		arr[j + 1] = min;
	}


	//print array
	cout << "[";
	for (int &x : arr) //for loop that allows modifying x, x is a reference to an item in array
	{
		cout << x << " ";
	}
	cout << "]\n";

	return 0;
}