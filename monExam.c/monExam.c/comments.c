#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<conio.h>
void comments(FILE *fp)
{
	FILE  *ft;
	char ch;
	ft = fopen("text2.txt", "w");
	if (ft == NULL)
		printf("Opening error");
	char ch2 = ' ';
	while (1) {
		ch = fgetc(fp);
		if (ch == EOF)
			break;
		if (ch == '/') {
			ch = fgetc(fp);
			if (ch == '*') {
				//putc(' ', ft);
				while (1) {
					ch = fgetc(fp);
					if (feof(fp))break;
					ch2 = fgetc(fp);
					if (ch == '*' && ch2 == '/') {
						break;
					}
					else {
						fputc(' ', ft);
					}
				}
			}
			else if (ch == '/') {
				while (1) {
					ch = fgetc(fp);
					if (feof(fp))break;
					if (ch == '\n')break;
					fputc(' ', ft);
				}
			}
			else {
				putc(ch, ft);
			}
		}
		
		else {
			putc(ch, ft);
		}
	}
	/*sdjsdfkdsjf*/
	fclose(fp);
	fclose(ft);
	getchar();
}