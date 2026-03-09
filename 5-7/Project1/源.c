#define _CRT_SECURE_NO_WARNINGS
#define Time 7
#include<stdio.h>
double M(double n);
int main(void)
{
	const int m = 7;
	double n1, n2;

	scanf("%lf",&n1);

	n2 = M(n1);
	printf("%lf",n2);

	return 0;
}

double M(double n)
{
	int m = 0;
	m = n * n * n;

	return m;
}