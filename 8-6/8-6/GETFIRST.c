#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"GETFIRST.h"
int get_first(void){
	char ch;

	do {
		ch = getchar();

	} while (ch == ' ' || ch == '\n' || ch == '\t');

	return ch;
}