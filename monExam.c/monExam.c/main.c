#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void count(FILE *fp);
void tabs(FILE *fp);
void comments(FILE *fp);
void main()
{
	int n;
	FILE *fp;
	printf("enter choice");
	scanf_s("%d",&n);
	fp=fopen("text.txt", "r");
	switch (n)
	{
	case 1:count(fp); break;
	case 2:tabs(fp); break;
	case 3:comments(fp); break;
	case 4:match(fp); break;
	default:
		break;
	}

}