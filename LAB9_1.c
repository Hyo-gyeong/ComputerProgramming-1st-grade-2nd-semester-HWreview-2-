#include <stdio.h>
int main(void)
{
	char c;

	printf("Enter ���ڿ�(q�������� ���ڿ��� ������)\n");

	c = getchar();
	while (!(c == 'q')){
		putchar(c);
		c = getchar();
	}
	
	printf("\n---------------------------------\n");
	
	printf("Enter ���ڿ�(q�������� ���ڿ��� ������)\n");
	while (getchar() != '\n'); //���� ���
	c = getchar();
	while (!(c == 'q')){
		putchar(c);
		c = getchar();
	}
	putchar('\n');
}