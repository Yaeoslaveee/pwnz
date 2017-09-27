// truncated.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>
#include "iostream"
#include <cmath>

int main()
{
	double h = 3.0;
	double S1 = 2.0;
	double S2 = 4.0;

	double V = 1.0/3.0*h * (S1 + sqrt(S1*S2) + S2);
	printf("V=%lf", V);

	return 0;
}