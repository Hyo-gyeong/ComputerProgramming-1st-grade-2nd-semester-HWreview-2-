//LAB10_0_2 : LAB10_0_0 ����ü �����ͷ� ����
struct student {
	char name[50];
	int midterm, final;
}aStudent;

#include <stdio.h>
int main(void)
{
	struct student *sp = &aStudent;
	char name[50];

	printf("Enter student name: ");
	scanf("%s", (*sp).name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &(*sp).midterm, &(*sp).final);

	printf("\n�̸�\t�߰�\t�б⸻\n");
	printf("%s\t%d\t%d\n", (*sp).name, (*sp).midterm, (*sp).final);
}