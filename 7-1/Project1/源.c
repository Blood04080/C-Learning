#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num1, num2, num3;
	num1 = num2 = num3 = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			num1++;
		else if (ch == '\n')
			num2++;
		else
			num3++;
	}
	printf("有%d个空格，有%d个换行符，有%d个其他字符",num1,num2,num3);

	return 0;
}
