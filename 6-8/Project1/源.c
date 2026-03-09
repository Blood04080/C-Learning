#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void n(double n1, double n2);
int main(void)
{
	double num1, num2;
	while (scanf("%lf %lf", &num1, &num2) == 2)
		n(num1, num2);

	return 0;
}
void n(double n1, double n2)
{
	printf("%lf", n1 - n2 / n1 * n2);
}
