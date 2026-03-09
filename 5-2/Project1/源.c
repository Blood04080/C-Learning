#define _CRT_SECURE_NO_WARNINGS
#define Time 60
#include<stdio.h>
int main(void)
{
	const int m = 60;
	int n1, n2, n3;
	scanf("%d",&n1);
	for(int i = 10;i > 0;i--,n1++)
		printf("%d\n", n1);

	return 0;
}
