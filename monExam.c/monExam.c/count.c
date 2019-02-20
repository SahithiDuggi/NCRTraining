#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void count(FILE *fp)
{
	
	char c;
	int alphabets=0, numbers=0, spcl=0, spaces=0;
	if (fp == NULL) { printf("error opening"); }
	c = fgetc(fp);
	
	while (1) {
		if (feof(fp))break;
		if (isalpha(c) != 0) {
			alphabets++;
		}
		else if (isdigit(c) != 0) {
			numbers++;
		}
		else if (c == 32)
		{
			spaces++;
		}
		else { spcl++; }
		c = fgetc(fp);
	}
	printf("%d  %d  %d", alphabets, numbers, spcl);
	getchar();
}