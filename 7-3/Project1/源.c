#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num1, num2, num3,num4, num5;
	num1 = num2 = num3 = num4 = num5 = 0;
	char ch;
	while (scanf("%d",&num1) == 1)
	{
		
		if (0 == num1)
			break;
		if (0 == num1 % 2)
		{
			num4 += num1;
			num2++;
		}
		else
		{
			num3 += num1;
			num5++;
		}
		
	}
	printf("有%d个奇数，有%d个偶数，偶数平均值为%.2f, 奇数平均值为%.2f",num5,num2,(float)num4 / num2, (float)num3 / num5);

	return 0;
}
