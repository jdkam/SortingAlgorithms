#include "Header.h"

using namespace std;


int main() {
	
	int arr[10] = { 3, 5, 2, 6, 1, 7, 4, 9, 8, 10 };
	int min_index = 0;
	int elementCount = sizeof(arr) / sizeof(int);


	for (int i = 0; i < elementCount; i++) //select the lowest integer
	{
		min_index = i;
		for (int k = i+1; k < elementCount; k++)
		{
			if (arr[k] < arr[min_index])
			{
				min_index = k;
			}
		}
		swap(arr[min_index], arr[i]);
		
	}


	//prints array
	cout << "[";
	for (int j = 0; j < elementCount; j++)
	{
		cout << arr[j] << " ";
	}
	cout << "]";

	
		return 0;
}

void swap(int * x, int * y)
{
	int * temp;
	temp = x;
	x = y;
	y = temp;
}