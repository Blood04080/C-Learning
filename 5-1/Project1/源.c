#define _CRT_SECURE_NO_WARNINGS
#define Time 60
#include<stdio.h>
int main(void)
{
	const int m = 60;
	int n1, n2, n3;
	scanf("%d",&n1);
	while (n1 > 0)
	{
		n2 = n1 / Time;
		n3 = n1 % m;
		printf("%d hour %d m",n2,n3);
		scanf("%d",&n1);
	}

	return 0;
}
