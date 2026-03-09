#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num1, num2;
	scanf("%d %d",&num1,&num2);
	for (int i = num1; i <= num2; i++)
	{
		printf("%d %d %d\n", i, i * i, i * i * i);
	}

	return 0;
}
