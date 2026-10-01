#include <iostream>
#include <new>//nothrow
using namespace std;


int main()
{
	int* p = new(nothrow) int;

	if (p != nullptr)
	{
		*p = 0;
		cout << *p << endl;
		delete p;
	}
	
	double* a = new(nothrow) double;

	if (a != nullptr)
	{
		*a = 0;
		cout << *a << endl;
		delete a;
	}

	char* b = new(nothrow)char;

	if (b != nullptr)
	{
		*b = 'h';
		cout << *b << endl;
		delete b;
	}

}