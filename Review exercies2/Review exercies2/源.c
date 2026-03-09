/*
 *素数计算器，这个程序会在用户输入一个正整数时输出所有小于该正整数的素数
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>//使用bool常量置标志位
int main(void) {
	int num1;
	_Bool A = true;

	while (scanf("%d", &num1) == 1) {//获取用户输入正整数
		if (num1 < 2) {
			printf("没有小于2的素数");
			continue;
		}
		for (int i = 2; i <= num1; i++) {//逐一比较小于输入正整数的整数
			A = true;
			for (int j = 2; j * j <= i; j++) {//判断素数循环
				if (i % j == 0) {
					A = false;//若符合检测条件说明并非素数，直接退出循环
					break;
				}
			}
			if (A)//通过标志位判断是否需要打印
				printf("%d ", i);
		}
		printf("\n");
	}

	return 0;
}