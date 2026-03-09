#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num1, num2, num3;
	num1 = num2 = num3 = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		switch (ch){
		
			case '.':
				printf("!");
				num1++;
				break;
			case '!' :
				printf("!!");
				num1++;
				break;
			default :
				putchar(ch);
				break;
		}
	}
	printf("±‰ªª¡À%d¥Œ",num1);

	return 0;
}
