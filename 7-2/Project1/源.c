#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num1, num2, num3;
	num1 = num2 = num3 = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		printf("源字符：%c - ASCLL码：%d",ch, ch);
		num1++;
		if (num1 % 8 == 0)
			printf("\n");
	}
	//printf("有%d个空格，有%d个换行符，有%d个其他字符",num1,num2,num3);

	return 0;
}
