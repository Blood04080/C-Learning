#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void character_matrix(char ch, int rows, int columns);
int main(void)
{
	char character;
	int row, column;

	printf("Please input characters to be printed and the number"
		" of rows and columns of the character matrix.\n:");
	scanf("%c %d %d",&character, &row, &column);

	character_matrix(character, row, column);

	return 0;
}
void character_matrix(char ch, int rows, int columns) {
	for (int a = 1; a <= columns; a++) {
		for (int b = 0; b < rows; b++)
			printf("%c", ch);
		printf("\n");
	}

	return;
}
