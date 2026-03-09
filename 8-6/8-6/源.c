#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"GETFIRST.h"
int main(void) {
	char ch;

	ch = get_first();
	printf("%c",ch);

	return 0;
}