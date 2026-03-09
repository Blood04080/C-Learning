#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char ch;
	int num1, num2;
	num1 = num2 = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a' && ch <= 'z')
			num1++;
		if(ch >= 'A' && ch <= 'Z')
			num2;
	}
	printf("共有%d 个大写字母，%d个小写字母", num2, num1);
	return 0;
} 