#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 26
int main(void)
{
	char Word[SIZE];
	for (int i = 0; i < 26; i++)
	{
		scanf("%c",&Word[i]);
	}
	for (int j = 0; j < 26; j++)
	{
		printf("%c", Word[j]);
	}

	return 0;
}
