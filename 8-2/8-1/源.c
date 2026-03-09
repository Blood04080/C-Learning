#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	char ch;
	int num1 = 0;

	while ((ch = getchar()) != EOF)
	{
		if (num1++ ==  10)
		{
			printf("\n");
			num1 = 1;
		}
		if (ch >= '\040')
			printf("%c %d", ch, ch);
		else if (ch == '\n')
			printf("\\n--\\n\n");
		else if (ch == '\t')
			printf("\\t--\\t\n");
		else
			printf("\'%c\'--^%c", ch, ch + 64);
	}

	return 0;
} 