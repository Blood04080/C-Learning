#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	int num1, num2;
	num1 = num2 = 0;

	while ((ch = getchar()) != EOF)
	{
		if(islower(ch))
			num1++;
		if(isupper(ch))
			num2;
	}
	printf("共有%d 个大写字母，%d个小写字母", num2, num1);
	return 0;
} 