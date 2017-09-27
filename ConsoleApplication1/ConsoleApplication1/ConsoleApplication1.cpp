// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <math.h>

int main()
{
	double a = -3;
	double b = -3;
	double c = 4;
	double D = pow(b, 2) - 4 * a*c;

	if (D > 0)
	{
		double x1 = (-b + sqrt(D)) / (2 * a);
		double x2 = (-b - sqrt(D)) / (2 * a);
		printf("x1=%lf, x2=%lf\n", x1, x2);
	}
	else if (0 == D)
	{
		double x = -b / (2 * a);
		printf("x=%lf\n", x);
	}
	else printf("No roots");
	return 0;
}