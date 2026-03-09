#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num1, num2, num3, num4;
	num3 = num4 = 0;
	while (scanf("%d %d", &num1, &num2) == 2)
	{
		for (int i = 0; i <=  num2 - num1; i++)
			num4 += (i + num1) * (num1 + i);
		printf("%d",num4);
	}
	
	return 0;
}
