#include <stdio.h>
int main(void)
{
	FILE *fp;

	fp = fopen("hello.txt", "at");
	if (fp == NULL){
		printf("file open error");
		return 1;
	}
	fprintf(fp, "Hi\n");
	fprintf(fp, "Everybody\n");
	fprintf(fp, "*^^*");

	fclose(fp);
}