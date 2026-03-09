#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char ch;
	int num1, num2;
	num1 = num2 = 0;

	while ((ch = getchar()) != EOF)
	{
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
			num1++;
		if (ch == ' ' || ch == '.' || ch == ',' || ch == '\n')
			num2++;
	}
	printf("平均字母数为%f", num1 / num2);
	return 0;
} 