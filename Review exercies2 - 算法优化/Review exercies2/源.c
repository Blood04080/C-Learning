#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int inputNum;

    while (scanf("%d", &inputNum) == 1) {
        if (inputNum < 2) {
            printf("没有小于2的素数\n");
            continue;
        }

        // 先处理2，因为2是唯一的偶数素数
        if (inputNum >= 2) {
            printf("2 ");
        }

        // 从3开始，只检查奇数
        for (int i = 3; i <= inputNum; i += 2) {
            bool isPrime = true;
            // 检查从3到sqrt(i)的奇数因子
            for (int j = 3; j * j <= i; j += 2) {
                if (i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}