#include <iostream>
using namespace std;

template <typename T>
T CalcTriArea(T bottom, T height)
{
	T area = height * bottom / 2;
	return area;
}

int main()
{
	cout << CalcTriArea(2, 2) << endl;

	// Q2
	cout << CalcTriArea<int>(2.5, 2.5) << endl;
}