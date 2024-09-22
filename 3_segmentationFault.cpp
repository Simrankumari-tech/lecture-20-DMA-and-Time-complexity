#include <iostream>
using namespace std;

int main() {

	int *a = NULL; // We are not authorised to access the address zero
	*a = 10; // This will give segmentation fault
	cout << *a << endl;// This will give segmentation fault


	return 0;
}