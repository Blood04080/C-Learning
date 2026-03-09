#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main() {
    int datam;
    char again;

    do {
        printf("Enter a number (0 to exit): ");
        scanf("%d", &datam);

        if (datam < 2) {
            break; // 小于2的数不是素数，直接退出循环
        }

        printf("\n");
        // 遍历2到datam范围内的每个整数，判断是否为素数
        for (int i = 2; i <= datam; i++) {
            int is_prime = 1; // 假设当前数是素数

            // 检查是否能被1或本身之外的数整除
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    is_prime = 0; // 能被整除，不是素数
                    break; // 退出内层循环
                }
            }

            // 根据素数标记，判断是否打印该数
            if (is_prime == 1) {
                printf("%d is a prime number\n", i);
            }
        }

        printf("\n");
        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &again); // 注意空格，避免读取上一个输入的换行符

    } while (again == 'y' || again == 'Y'); // 循环直到用户选择退出

    printf("Done! bye...\n");
    return 0;
}