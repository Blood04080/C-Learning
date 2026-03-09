#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char ch;
	int num1 = 0;

	while ((ch = getchar()) != EOF)
	{
		if (ch == '\n')
			continue;
		else if (ch == ' ')
			continue;
		else
			num1++;
	}
	printf("这个文件共有%d个有效字符", num1);

	return 0;
} 