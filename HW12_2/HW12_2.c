#include <stdio.h>
#include <ctype.h>
#include <conio.h>
int main(void)
{
	FILE *fp, *fp2;
	char ch;

	fp = fopen("read.txt", "rt");
	if (fp == NULL) {
		printf("file open error\n");
		return 1;
	}
	fp2 = fopen("input.txt", "wt");
	if (fp2 == NULL) {
		printf("file open error\n");
		return 1;
	}

	ch = fgetc(fp); //fgetc - <conio.h>
	while (!feof(fp)){
		fputc(toupper(ch), fp2);
		ch = fgetc(fp);
	}

	fclose(fp);
	fclose(fp2);

	fp = fopen("read.txt", "rt");
	if (fp == NULL) {
		printf("file open error\n");
		return 1;
	}
	fp2 = fopen("input.txt", "at");
	if (fp2 == NULL) {
		printf("file open error\n");
		return 1;
	}

	ch = fgetc(fp); 
	while (!feof(fp)){
		fputc(tolower(ch), fp2);
		ch = fgetc(fp);
	}

	fclose(fp);
	fclose(fp2);
}