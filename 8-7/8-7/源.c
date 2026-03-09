#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"method.h"//数字处理文件
int main(void) {
	double n1, n2;
	char ch = 'z';

	printf("A加法，B减法，C除法，D乘法，Q退出\n");
	while (ch != 'q' && ch != 'Q') {//主循环内
		ch = getchar();
		switch (ch) {
			case 'a':
			case 'A':
				printf("请输入数字1：");
				n1 = get_number();
				printf("请输入数字2：");
				n2 = get_number();
				addition(n1, n2);
				break;
			case 'b':
			case 'B':
				printf("请输入数字1：");
				n1 = get_number();
				printf("请输入数字2：");
				n2 = get_number();
				subtraction(n1, n2);
				break;
			case 'c':
			case 'C':
				printf("请输入数字1：");
				n1 = get_number();
				printf("请输入数字2：");
				n2 = get_number();
				division(n1, n2);
				break;
			case 'd':
			case 'D':
				printf("请输入数字1：");
				n1 = get_number();
				printf("请输入数字2：");
				n2 = get_number();
				multiplication(n1, n2);
				break;
		}
	}

	return 0;
}