#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print_character_matrix(char ch, int rows, int columns);
int main(void)
{
	char character;
	int row, column;//使用清晰的变量名，增加代码的可读性。

	printf("Please input characters to be printed and the number"
		" of rows and columns of the character matrix.\n:");
	scanf(" %c %d %d",&character, &row, &column);//在%c前加一个空格，表示跳过之前输入的空白字符。

	print_character_matrix(character, row, column);

	return 0;
}
void print_character_matrix(char ch, int rows, int columns) {
	for (int a = 1; a <= columns; a++) {
		for (int b = 0; b < rows; b++)
			putchar(ch);//使用putchar函数效率高于使用printf
		printf("\n");
	}

	return;
}
