#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	float high;
	char name[40];
	scanf("%s %f",name,&high);
	printf("%s %f", name,high/12);

	return 0;
}
