#define _CRT_SECURE_NO_WARNINGS
#define Time 7
#include<stdio.h>
int main(void)
{
	const int m = 7;
	int n1;
	scanf("%d",&n1);
	while (n1 > 0)
	{
		printf("%d hour %d m",n1 / Time ,n1 % m);
		scanf("%d", &n1);
	}

	return 0;
}
