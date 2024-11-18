#include <iostream>
#include <memory>

using namespace std;

int main()
{
	int n1 = 42;

	int* n1ptr = &n1;

	cout << "n1ptr = " << n1ptr;
	cout << "n1prt* = " << *n1ptr;

	int n2 = 53;
	int* n2ptr;
	n2ptr = n1ptr;

	cout << "n2ptr = " << n2ptr;
	cout << "n2prt* = " << *n2ptr;

	int total = 0;
	total = *n2ptr + *n1ptr;
	cout << "total = " << total;

	int scores[4] = { 97,5,85,79 };
	for (int i = 0; i < 4; i++)
	{
		cout << "scores at " << i << "is " << *(scores + i) << endl;

	}


}