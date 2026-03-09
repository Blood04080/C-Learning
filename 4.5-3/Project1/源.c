#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main(void)
{
	double num;
	scanf("%lf",&num);
	printf("%.3lf, %.3le",num,num);

	return 0;
}
