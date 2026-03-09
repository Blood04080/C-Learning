#define _CRT_SECURE_NO_WARNINGS
#define SIZE 100
#include<stdio.h>
#include<string.h>
int main(void)
{
	int num1, num2;
	char Word[SIZE];
	num2 = scanf("%s",Word);
	num1 = strlen(Word);
	for(int i = num1; i >= 0; i--)
	{
		printf("%c", Word[i]);
	}

	return 0;
}
