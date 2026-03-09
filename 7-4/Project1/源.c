#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num1, num2, num3;
	num1 = num2 = num3 = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		if ('.' == ch)
		{
			ch = '!';
			num1++;
		}
		else if ('!' == ch)
		{
			ch = '!!';
			num1++;
		}
		putchar(ch);
	}
	printf("±‰ªª¡À%d¥Œ",num1);

	return 0;
}
