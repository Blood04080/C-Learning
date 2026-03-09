#define _CRT_SECURE_NO_WARNINGS
#define Time 7
#include<stdio.h>
int main(void)
{
	const int m = 7;
	int n1,n2 = 0;
	scanf("%d",&n1);
	while (n1 > 0)
	{
		n2 = n2 + n1--;
		printf("\n%d\n", n2);
		scanf("%d", &n1);
	}

	return 0;
}
