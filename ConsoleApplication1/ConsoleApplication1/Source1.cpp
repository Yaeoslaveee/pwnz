#include "stdafx.h"
#include <math.h>
#include "iostream"
#include <cmath>

int main()
{
	double h = 3;
	double S1 = 2;
	double S2 = 4;

	double x1 = 1 / 3 * h;
	double x2 = sqrt(S1) * sqrt(S2);
	double x3 = S1 + x2 + S2;

	double x4 = x1 * x3;
	printf("x4=%lf, x4");

		return 0;
}