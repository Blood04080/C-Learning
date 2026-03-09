#define _CRT_SECURE_NO_WARNINGS
#define Time 7
#include<stdio.h>
void M(double n);
int main(void)
{
	const int m = 7;
	int n1, n2;

	while (scanf("%d", &n2) == 1)
	{
		M(n2);
	}
	return 0;
}

void M(double n)
{
	double m = 0, t = 0;
	m = 5.0/9.0 * (n - 32);
	t = m + 273;

	printf("%lf %lf %lf\n", n, m, t);  

}