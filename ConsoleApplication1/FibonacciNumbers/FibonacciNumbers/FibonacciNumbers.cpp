// FibonacciNumbers.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

void print_fibonacci(int n)
{
	int f1 = 1;
	int f2 = 1;

	if (n > 0) printf("1\n");
	if (n > 1) printf("1\n");

	for (int i = 0; i < n - 2; i++)
	{
		int sum = f1 + f2;
		f1 = f2;
		f2 = sum;
		printf("%d\n", sum);
	}
}

int main()
{
	print_fibonacci(15);
    return 0;
}
