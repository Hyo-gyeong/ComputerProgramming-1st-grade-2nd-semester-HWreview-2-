#include <stdio.h>
int main(void)
{
	FILE *fp, *fp2;
	char str;

	fp = fopen("read.txt", "r");//������ ��� ���ڸ� �о���� ��ġ�����ڸ� �� ó������ ��.
	if (fp == NULL){
		printf("file open error");
		return 1;
	}

	str = fgetc(fp);
	printf("%c", str);
	str = fgetc(fp);
	printf("%c", str);
	str = fgetc(fp);
	printf("%c", str);
	str = fgetc(fp);
	printf("%c", str);
	fputc(str, stdout); // ���Ͽ� ���� ���� ����.
	/*fgetc�Լ��� ȣ���� ������ ���������� ���ڸ� �ϳ��� ������.fgetc�Լ��� �� �� ���������� '��ġ������'�� 
	�� �ϳ��� �÷� �������ڸ� ����Ŵ.*/

	fp2 = fopen("textWirte", "w");
	if (fp2 == NULL) {
		printf("file open error");
		return 1;
	}

	printf("%c", fputc('h', fp2));//���Ͽ��� ���̰� ȭ�鿡�� ��µ�.
	printf("%c", fputc('i', stdout));//+ȭ�鿡 �ٽ� ���.
	fputc(fgetc(fp), fp2); //fp��ġ�����ڰ� ���� ���������� ���� �ϳ��� fp2�� ���
	fputc(fgetc(fp), stdout);//fp��ġ�����ڰ� ���� ���������� ���� �ϳ��� ȭ�鿡 ���

	fclose(fp);// ��� ���ڸ� ȣ���ϰ� ��ġ�����ڰ� ���� ���� -1�� ���Ͱ����� ������.
	fclose(fp2);
}