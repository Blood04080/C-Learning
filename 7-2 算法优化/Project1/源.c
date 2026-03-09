#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num1, num2, num3;
	num1 = num2 = num3 = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		printf("源字符：%c - ASCLL码：%03d",ch, ch);//通过%03d中的数字限定数据长度，起到统一长度的作用
		if (ch == '\n')
			printf("'\\n' - %03d", ch);
		else if (ch == '\t')
			printf("'\\t' - %03d", ch);
		if (num1++ % 8 == 0)//将标志位更新与判断置于一处，便于维护与修理
			printf("\n");
	}
	//printf("有%d个空格，有%d个换行符，有%d个其他字符",num1,num2,num3);

	return 0;
}
