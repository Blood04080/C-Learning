#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	float high1,high2;
	
	scanf("%f %f",&high1, &high2);
	printf("%f %f %f",high1, high2, high1 * 8/high2);

	return 0;
}
