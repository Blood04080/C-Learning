#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void num(double* a, const double* b) {
	if (*a <= *b)
		*a = *b;//通过指针直接修改变量的值
}
int main(void)
{
	double num1, num2;
	printf("Upon inputing two numerical values,"
		" the program will ccompare their magnitudes.\n");
	scanf("%lf %lf", &num1, &num2);
	num(&num1, &num2);//直接传递变量地址
	printf("The larger number is : %.2lf", num1);

	return 0;
}