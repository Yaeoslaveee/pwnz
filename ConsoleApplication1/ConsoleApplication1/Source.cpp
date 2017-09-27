#include "stdafx.h"
#include <math.h>
#include "iostream"

int main() 
{
	double R;
	const double pi = 3.14;
	std::cout << "vvedite radius: ";
	std::cin >> R;
	double l = 2 * pi*R;
	std::cout << "l = " << l << end;
	return 0;
}