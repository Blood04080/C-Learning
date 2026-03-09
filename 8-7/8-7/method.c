#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"method.h"
double get_number(void) {
	double n;
	char j = 'Z';//定义一个字符变量来存储非数字值

	while (scanf("%lf", &n) != 1) {/*若scanf输入失败，则说明此时输入的不为数字，
		由于scanf会将读取失败的部分放回待读取序列中，则之后可以用getchar()直接从失败处开始读取
		*/
		while ((j = getchar()) != '\n')//判断并非换行符
			putchar(j);//输出
		printf("不是一个数字，请重新输入！");
	}


	return n;
}
double addition(double n1, double n2) {
	double n = 0;

	n = n1 + n2;
	printf("%lf", n);

	return n;
}
double subtraction(double n1, double n2) {
	double n = 0;

	n = n1 - n2;
	printf("%lf", n);

	return n;
}
double division(double n1, double n2) {
	double n = 0;

	n = n1 / n2;
	printf("%lf", n);

	return n;
}
double multiplication(double n1, double n2) {
	double n = 0;

	n = n1 * n2;
	printf("%lf", n);

	return n;
}
