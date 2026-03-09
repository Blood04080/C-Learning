#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    char ch;

    printf("请输入一个大写字母(A-Z)，程序将输出对应的字母塔：");

    while (scanf(" %c", &ch) == 1)  // 注意%c前的空格
    {
        // 输入验证
        if (ch < 'A' || ch > 'Z') {
            printf("输入无效！请输入A-Z之间的大写字母：");
            continue;
        }

        // 提供退出机制
        if (ch == 'Q') {
            printf("程序结束！\n");
            break;
        }

        printf("字母塔如下：\n");

        for (int i = 0; i <= ch - 'A'; i++)
        {
            // 打印前导空格
            for (int j = 0; j < ch - 'A' - i; j++)
                printf(" ");

            // 正序打印字母
            for (int m = 0; m <= i; m++)
                printf("%c", 'A' + m);

            // 逆序打印字母
            for (int n = i - 1; n >= 0; n--)  // 更直观的写法
                printf("%c", 'A' + n);

            printf("\n");
        }

        printf("\n请输入下一个大写字母(输入Q退出)：");
    }

    return 0;
}