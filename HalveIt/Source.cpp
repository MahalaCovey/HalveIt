// Mahala Covey
// CIS 1202 800
// April 10, 2024

#include <iostream>
using namespace std;

//****************************************************************
// The generic half function returns the half value of a number. *
//****************************************************************

template <typename T>
T half(T num)
{
	return num / 2;
}

//******************************************************************************************
// The explicitly-defined half function returns the the half value of an integer, rounded. *
//******************************************************************************************

int half(int num)
{
	return round(static_cast<float>(num) / 2);
}

int main()
{
	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(3) << endl;

	return 0;
}