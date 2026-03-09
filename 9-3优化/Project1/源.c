#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print_character_matrix(char ch, int rows, int columns);
int main(void)
{
	int rows, columns;
	char ch;

	printf("This program will print a character matrix."
	"Please input character, rows and columns of the matrix\n:");
	scanf(" %c %d %d",&ch, &rows, &columns);
	print_character_matrix(ch, rows, columns);

	return 0;
}
void print_character_matrix(char ch, int rows, int columns) {

	for (int i = 1; i <= rows; i++) {
		for (int j = 1; j <= columns; j++)
			putchar(ch);
		putchar('\n');
	}
}