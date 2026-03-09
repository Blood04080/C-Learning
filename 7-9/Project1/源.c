#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	int num1, num2, num3,num4, num5;
	num1 = num2 = num3 = num4 = num5 = 0;
	char ch;
	_Bool Flag = false;
	while (scanf("%d",&num1) == 1)
	{
		if (num1 <= 0);
		else
			for (int i = 1; i <= num1; i++)
			{
				for (int j = 1; j <= i; j++)
				{
					if (i % j == 0)
					{
						num3++;
						if (i == j && num3 <= 2)
							printf("%d", j);
					}
				}

			}
		
		
	}

	return 0;
}
