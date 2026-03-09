#define _CRT_SECURE_NO_WARNINGS
#define Time 7
#include<stdio.h>
double M(double n);
int main(void)
{
	const int m = 7;
	int n1, n2;

	scanf("%d %d",&n1,&n2);
	while (n1 > 0 && n2 > 0)
	{
		printf("%d\n", n1 % n2);
		scanf("%d %d", &n1, &n2);
	}

	return 0;
}

double M(double n)
{
	int m = 0;
	m = n * n * n;

	return m;
}