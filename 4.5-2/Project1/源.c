#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main(void)
{
	char Fname[40];
	char Lname[40];
	int num;
	scanf("%s",Lname);
	num = printf("\"%s\"", Lname);
	printf("\"%20s\"", Lname);
	printf("\"%-20s\"", Lname);
	printf("\"%*s\"",strlen(Lname) + 3,Lname);
	printf("\"%*s\"", num+=1, Lname);

	return 0;
}
