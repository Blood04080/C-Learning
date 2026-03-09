/*
第6章的编程练习5
*/
#include <stdio.h>
int main(void) {
    int i, j, num;
    char c;
    printf("Enter the core char you want to print(A...Z):");
    scanf("%c", &c);
    char ch = 'A';
    num = c - 'A' + 1;
    /* 输入字符的ASCII码减去'A'加1得到的十进制结果num
     * num即是需要打印的从A开始的字符数，也是打印的总行数
     */
    for (i = 1; i <= num; i++) {
        /* 外层循环控制打印行数，num为输入字符和A的差加1 */
        for (j = 0; j < num - i; j++)
            printf(" ");
        /* 打印空格，空格数为总字符数减去当前行应打印的字符数，
         * 即，本行应打印空格数 + 应打印字符数 = 总字符数(总行数)
         */
        for (ch = 'A'; j < num; j++)
            printf("%c", ch++);
        /* 在打印正序字符数时，需要通过ch做递增操作，起始值j在空格处已经通过循环
         * 做了初始化，因此只打印剩余字符数
         */
        for (j = 1, ch -= 2; j < i; j++, ch--)
            printf("%c", ch);
        /* 在打印逆序字符时，字符做递减操作 */
        printf("\n");
    }
    return 0;
}