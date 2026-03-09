/*
 *  优化猜数字(0 - 100)
 */
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void){
	int min, max, mid;
	min = 0;
	max = 100;
	mid = (min + max) / 2;
	char ch1,ch2;
	printf("这是一个猜数字程序，让我们开始吧！\n");
	printf("我猜是%d\n",mid);
			printf("请告诉我大了还是小了？\n");
			while (scanf("%c", &ch1) == 1) {
				if (ch1 == '\n')
					continue;
				if (ch1 == 'q')
					break;
				else {
					switch (ch1) {
					case 's':
					case 'S': {
						min = mid;
						mid = (min + max) / 2;
						printf("我猜是%d\n", mid);
						break;
					}
					case 'b':
					case 'B': {
						max = mid;
						mid = (min + max) / 2;
						printf("我猜是%d\n", mid);
						break;
					}
					case 'y':
					case 'Y': {
						printf("我做到了！");
						break;
					}
					}
					
				}
			}
		
	return 0;
}