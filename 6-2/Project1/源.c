#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 26
int main(void)
{
	char Word = '$';
	char n, H ;
	scanf("%c",&H);
	for (int i = 0; i <= (int)(H - 'A' + 1); i++)
	{
		for(int j = 0; j < 5 - i; j++)
			printf(" ");
		for (int k = 0, n = 'A'; k < i; k++, n++)
		{
			printf("%c", n);
		}
		for (int m = 0; m < i - 1; m++)
		{
			char num = 'A' + i;
			printf("%c", num - m - 2);
		}
		printf("\n");
	}

	return 0;
}
