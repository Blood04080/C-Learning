#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	float num1, num2, num3,num4, num5;
	num1 = num2 = num3 = num4 = num5 = 0;
	char ch;
	while (scanf("%f",&num1) == 1)
	{
		if (num1 <= 40)
		{
			num2 = num1 * 10;
			if (num2 >= 300)
				num3 = (300 * 0.15) + ((num2 - 300) * 0.2);
		}
		else
		{
			num2 = num1 * 10 * 1.5;
			if (num2 <= 450)
				num3 = (300 * 0.15) + ((num2 - 300) * 0.2);
			else
				num3 = 300 * 0.15 + 150 * 0.2 + (num2 - 450) * 0.25;
		}
		printf("工资总额为%f,税金为%f,净收入为%f\n", num2, num3, num2 - num3);
	}

	return 0;
}
