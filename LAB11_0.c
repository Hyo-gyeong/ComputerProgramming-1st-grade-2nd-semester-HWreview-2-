#include <stdio.h> 
int main(void) 
{ 
	 struct foo_t { int x; int y; char c; char c2;  }; //12byte
	 //VS struct foo_t {  char c; int x;  char c2; int y; }; //16byte
	 /*padding  : ���� ū �޸𸮸� �������� ��� �� char vs int ->int�� �޸𸮸� ��� ���� �ϳ��� ����. 4byte�ʰ��ؼ� �������� ������
	 char - int ������ �޸� �ϳ� �ø��� char- char ������ int �޸��ϳ��� ���� ����*/
	struct foo_t data; 
	struct foo_t *ptr = &data, *ptr2; 

	ptr2 = ptr;
	ptr2++;

	// ��) 
	printf("sizeof data is = %d\n", sizeof(data));  //a) 

	printf("data�� ù �ּҰ��� %d\n", &data);    //b) 

	printf("data.x ù �ּҰ��� %d\n", &data.x);   //c) b�� ����

	printf("data.y �� ��° �ּҰ��� %d\n", &data.y); //c')

	printf("ptr�� ����Ű�� �ּҰ��� %d\n", ptr);  //d) 

	printf("ptr2�� ����Ű�� �ּҰ��� %d\n", ptr2);//e)

	return; 
}