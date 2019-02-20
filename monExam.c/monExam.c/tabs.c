#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
void tabs(FILE *fp) {
	char c;
	if (fp == NULL) { printf("error opening"); }
	c = fgetc(fp);
	while (c != feof(fp)) {
		if (c == '\t')
		{
			fputc(fp, "/t");
		}
		c = fgetc(fp);
	}
}