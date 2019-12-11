//LAB10_0_2 : LAB10_0_0 구조체 포인터로 수정
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

	printf("\n이름\t중간\t학기말\n");
	printf("%s\t%d\t%d\n", (*sp).name, (*sp).midterm, (*sp).final);
}