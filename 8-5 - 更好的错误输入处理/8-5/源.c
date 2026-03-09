#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>  // 用于toupper函数

int main(void) {
    int min = 0, max = 100, mid;
    char response;

    printf("=== 猜数字游戏 (0-100) ===\n");
    printf("游戏说明：\n");
    printf("  B/b - 你猜的数字太大了\n");
    printf("  S/s - 你猜的数字太小了\n");
    printf("  Y/y - 猜对了！\n");
    printf("  Q/q - 退出游戏\n");
    printf("==========================\n\n");

    do {
        mid = (min + max) / 2;
        printf("我猜是: %d\n", mid);
        printf("这个数字是(B)大了，(S)小了，还是(Y)正确？ ");

        // 清除输入缓冲区
        while (getchar() != '\n');

        if (scanf("%c", &response) != 1) {
            printf("输入错误，请重新输入！\n");
            continue;
        }

        // 转换为大写便于比较
        response = toupper(response);

        switch (response) {
        case 'B':
            max = mid - 1;
            if (min > max) {
                printf("你之前说过比%d小，现在又说比%d大，矛盾了！\n", min, max + 1);
                printf("重新开始游戏...\n");
                min = 0;
                max = 100;
            }
            break;

        case 'S':
            min = mid + 1;
            if (min > max) {
                printf("你之前说过比%d大，现在又说比%d小，矛盾了！\n", min - 1, max);
                printf("重新开始游戏...\n");
                min = 0;
                max = 100;
            }
            break;

        case 'Y':
            printf("\n🎉 太棒了！我猜对了！\n");
            printf("答案是: %d\n", mid);
            break;

        case 'Q':
            printf("游戏结束！\n");
            break;

        default:
            printf("无效输入！请使用 B/b, S/s, Y/y 或 Q/q\n");
            break;
        }

        // 检查是否还有猜测空间
        if (min > max && response != 'Y' && response != 'Q') {
            printf("范围错误！可能你记错了数字？重新开始...\n");
            min = 0;
            max = 100;
        }

    } while (response != 'Y' && response != 'Q');

    printf("感谢游戏！\n");
    return 0;
}