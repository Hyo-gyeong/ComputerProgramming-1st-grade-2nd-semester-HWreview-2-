#include <stdio.h>
int main(void)
{
	FILE *fp, *fp2;
	char ch;

	fp = fopen("hello.txt", "wt");
	if (fp == NULL){
		printf("���� ���� ����");
		return 1;
	}

	fprintf(fp, "Hello\n");
	fprintf(fp, "World\n");
	fclose(fp);

	fp2 = fopen("hello.txt", "rt");
	if (fp2 == NULL) {
		printf("���� ���� ����");
		return 1;
	}

	ch = getc(fp2);
	//fscanf(fp, "%c", &ch); /��� ����
	while (!feof(fp2)){
		putc(ch, stdout);
		//fprintf(stdout, "%c", ch); //��� ����
		ch = getc(fp2);
	}

	fclose(fp2);
}