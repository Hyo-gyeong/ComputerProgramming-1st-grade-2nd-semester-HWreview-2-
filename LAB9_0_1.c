//9_0_1, 9_0_2, 9_0_2a, 9_0_2b
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main(void) 
{
	//9_0_1
	//scanf - printf�� ������ ������ ���� ����. �������� '\0'�ְ� ���� �پ��ִ� ���� �ϳ� ������.
	//gets - puts�� ����Ű ������ ������ 1�� �״�� ����, '\0'�� ������ ��, ���͸� '\0'�� �ٲ���, *Ư¡* �Լ��� ũ�⿡ ���� ������ ���� ������ ������ ������
	//��) str[5]; �� 123456�Է��ϸ� �״�� ����ϰ� corruptedâ ������.
	//fgets - fputs/puts�� '\0'�� ������ ���ڿ��� ����.�� ���͸� ġ�� ����+����+NULL�̵Ǿ� ���͵� ��µ�.
	//�̸� ���� ��� str[strlen(�����̸�)-1] = '\0';�̷��� ���ֱ�
	/*char ch;  
	
	while(1)  {   
		scanf("%c", &ch); // �� 1)  
		// ch = getchar(); // �� 2)  
		// ch = fgetc(stdin); // �� 3) 
		// ch = getch(); // �� 4)  
		// ch = getche(); // �� 5) 
	
		if( ch == 'q' ) break;  
		putch(ch); // printf("%c", ch), putchar(ch), fputc(ch, stdout)�� ��� ���� ��� 
	} */

	//--------------------------------------------
	//9_0_2
	/*char c;
	printf("Enter characters(^Z for exit) : \n"); //�ܼ��� ��� ctrl+z�� eof
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
	//while������ != '\n'�� �ƴ϶�(?)^Z������ ���α׷� ������ �ʰ� ��� ����.*/

	//--------------------------------------------
	//9_0_2a

	/*char ch;

	printf("Enter characters(^Z for exit) : \n");
	ch = getchar();
	while (ch != EOF){
		if (islower(ch))
			putchar(toupper(ch));
		else if (tolower(ch))
			putchar(tolower(ch));
		ch = getchar();
	}*/

	//--------------------------------------------
	//9_0_2b

	char ch;

	printf("Enter characters(^Z for exit) : \n");
	while ((ch = fgetc(stdin)) != EOF){
		if (islower(ch))
			fputc(toupper(ch), stdout);	
		else
			fputc(tolower(ch), stdout);
	}
}