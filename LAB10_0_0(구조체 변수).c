//LAB10_0_0(����ü ����)
struct student 
{
	char name[50];
	int midterm, final;
};

#include <stdio.h>
int main(void)
{
	struct student aStudent;
	char name[50];

	printf("Enter student name: ");
	scanf("%s", aStudent.name);
	printf("Enter midterm and final score: ");
	scanf("%d %d", &aStudent.midterm, &aStudent.final);

	printf("\n�̸�\t�߰�\t�б⸻\n");
	printf("%s\t%d\t%d\n", aStudent.name, aStudent.midterm, aStudent.final);
}

