#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void num(const double* ptr, const double* ptr1);
int main(void)
{
	double num1, num2;
	printf("Upon inputing two numerical values,"
		" the program will ccompare their magnitudes.\n");
	scanf("%lf %lf", &num1, &num2);
	double * ptr1 = &num1;
	double * ptr2 = &num2;
	num(ptr1, ptr2);
	printf("The larger number is : %.2lf", num1);

	return 0;
}
void num(const double* ptr, const double* ptr1) {
	double* pr = ptr;
	double* pr2 = ptr1;

	if (*pr >= *pr2)
		;
	else
		*pr = *pr2;

	return;
}