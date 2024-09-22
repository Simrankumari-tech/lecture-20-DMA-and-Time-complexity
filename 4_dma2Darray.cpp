#include <iostream>
using namespace std;

int main() {
	int rows, cols;
	cin >> rows >> cols;

	int **arr  =  new int*[rows];
	for (int i = 0; i < rows; ++i)
	{
		arr[i] = new int[cols];
	}

	// Use normal way se hoga
	int number = 1;
	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			arr[i][j] = number++;
		}
	}

	for (int i = 0; i < rows; ++i)
	{
		for (int j = 0; j < cols; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}


	// Deleting the 2D array
	// Delete all cols array
	for (int i = 0; i < rows; ++i)
	{
		delete []arr[i];
	}
	// delete rows wala array
	delete []arr;

	arr = NULL;

	return 0;
}