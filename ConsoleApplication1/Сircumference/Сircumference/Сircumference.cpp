// Сircumference.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#define M_PI 3.14159265358979323846

int main() {

	double r;
	printf("enter radius: ");
	scanf_s("%lf", &r);
	double l = 2*M_PI*r;
	printf("l = %.8lf\n", l);
	return 0;
}
