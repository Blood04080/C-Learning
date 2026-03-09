#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
	char name1[40];
	char name2[40];
	scanf("%s", name1);
	scanf("%s", name2);
	printf("%s %s\n",name1,name2);
	printf("%*d %*d", strlen(name1), strlen(name1), strlen(name2), strlen(name2));


	return 0;
}
