#include <stdio.h> 
int main(void)
{
	int state; 
	FILE * fp; 
 
	char ch; 
 
	fp = fopen("hello.in", "rt"); 
	if (fp == NULL)   { 
		printf("���� ���� �����Դϴ�!!!\n");
		return 1;  
	} 
 
    ch = getc(fp);
	while (!feof(fp)){
		//putc(ch, stdout);
		//fprintf(stdout, "%c", ch);
		printf("%c", ch);//���� �� �������
		ch = getc(fp);
	}
 
	fclose(fp); 
	return 0;
} 