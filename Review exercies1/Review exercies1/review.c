//复习编程训练1——字母塔程序
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char ch, ch1;
	ch1 = 'A';

	printf("请输入一个任意的大写字符，这个程序会输出一个字符塔：___\b\b\b");

	while (scanf("%c", &ch) == 1)//循环读取用户的输入，在用户输入错误的输入前，程序将持续运行
	{
		for(int i = 0; i <= ch - 'A'; i++)//行数计算，通过计算用户输入字符ASCLL码与字符A的ASCLL码的差值，确定需要打印的行数
		{
			for(int j = 0; j < ch - 'A' - i; j++)//计算每一行行前需要打印的空格数
				printf(" ");
			for (int m = 0; m <= i; m++)//打印字符循环，通过对i的比较，正序打印到该行最大字符
				printf("%c", 'A' + m);
			for (int n = 1; n <= i; n++)//由于打印本行最大字符的任务交由正序循环,所以倒叙从本行最大字符-1开始打印
				printf("%c" ,'A' + i - n);
			printf("\n");//倒叙打印完毕后换行
		}
	}

	return 0;
}