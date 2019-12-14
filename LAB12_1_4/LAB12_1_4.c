#include <stdio.h>
int main(void)
{
	FILE *fp, *fp2;
	char ch;

	fp = fopen("hello.txt", "wt");
	if (fp == NULL){
		printf("파일 오픈 에러");
		return 1;
	}

	fprintf(fp, "Hello\n");
	fprintf(fp, "World\n");
	fclose(fp);

	fp2 = fopen("hello.txt", "rt");
	if (fp2 == NULL) {
		printf("파일 오픈 에러");
		return 1;
	}

	ch = getc(fp2);
	//fscanf(fp, "%c", &ch); /결과 같음
	while (!feof(fp2)){
		putc(ch, stdout);
		//fprintf(stdout, "%c", ch); //결과 같음
		ch = getc(fp2);
	}

	fclose(fp2);
}