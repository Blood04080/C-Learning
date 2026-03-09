#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>
int main(void)
{
	int num1, num2, num3;
	num1 = num2 = num3 = 0;
	char ch, ch1;
	_Bool Flag = false;//设定标志位，初始化标志位为0
	ch1 = 'E';
	while ((ch = getchar()) != '#')
	{
		switch(ch){
			case 'e' :
				Flag = true;
				break;
			case 'i' :
				if (Flag == true)
				{
					Flag = false;
					num1++;
				}
				else
					Flag = false;
				break;
			default :
				Flag = false;
				break;	
		}

	}
	printf("%d",num1);

	return 0;
}
