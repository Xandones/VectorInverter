#include <iostream>
using namespace std;

void ShowVector(int *Vector, int VectorSize); // Uses a pointer to the 1st array element to display the whole array.
int *InvertVector(int *Vector, int VectorSize); // Returns a pointer for the 1st element of the inverted array.

int main()
{
	int Array[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30 };

	int ArraySize = size(Array);
	cout << "Array size: " << ArraySize << "\n";
	ShowVector(Array, ArraySize); // When you send an array to a function with pointers it will point for the first element of the array.
	cout << endl;
	ShowVector(InvertVector(Array, ArraySize), ArraySize); // Here we are inverting the array and showing the result.
}

void ShowVector(int *Vector, int VectorSize)
{
	for (int i = 0; i < VectorSize; i++)
	{
		cout << (i + 1) << " - " << Vector[i] << "\n";
	}
}

int* InvertVector(int* Vector, int VectorSize) 
{
	int j = 0;
	static int InvertedArray[15];

	for (int i = (VectorSize - 1); i >= 0; i--)
	{
		InvertedArray[j] = Vector[i];
		j++;
	}
	
	return InvertedArray;
}
