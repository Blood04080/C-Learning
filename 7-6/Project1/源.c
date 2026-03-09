#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num1, num2, num3;
	num1 = num2 = num3 = 0;
	char ch, ch1;
	ch1 = 'E';
	while ((ch = getchar()) != '#')
	{
		if ('e' == ch1 && 'i' == ch)
			num1++;
		ch1 = ch;
	}
	printf("%d",num1);

	return 0;
}
