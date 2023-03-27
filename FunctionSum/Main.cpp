#include<iostream>
#include<stdlib.h>
using std::cout;
using std::endl;
using std::endl;
#define tab "\t"
using namespace std;

int Sum(int n ...);
template<typename T> T Sum(int n, T value ...)
{
	int Sum = 0;
	va_list list;
	va_start(list, value);
	for (int i = 0; i < n; i++);
	{
		cout << value << "\t";
		Sum += value;
	}


	cout << endl;
	va_end
	return Sum;
}
void main()
{
	setlocale(LC_ALL, "");

	cout << Sum(10, 2, 3, 0) << endl;;
}

int Sum(int n, ...)
{
	int *pa = &n;
	int Sum = 0;
	while(*pa)
	{
		Sum = Sum + (*pa);
		pa++;
	}
	return Sum;
}