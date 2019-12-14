//HW11_1 : HW10_1를 사용하여 HW10_1의 프로그램을 다시 작성하라,  s[..]의 표현은 더 이상 사용하지 않고, sp와 -> 연산자만을 사용하라. 
struct student {
	char name[20];  
	int midterm;  
	int final;  
	int average;  
	char grade;
};
#include <stdio.h>
int main(void)
{
	struct student s[3];
	struct student *sp = s;
	int i;
	int midsum = 0;
	int finalsum = 0;

	for (i = 0; i < 3; i++)
	{
		printf("Enter student name : ");
		scanf("%s", sp->name);
		printf("Enter midterm and final score : ");
		scanf("%d %d", &sp->midterm, &sp->final);
		sp->average = (sp->midterm + sp->final) / 2;
		sp++;
	}
	sp = s;//초기화 필요

	printf("\n\n이름\t중간\t학기말\t평균\n");
	for (i = 0; i < 3; i++){
		printf("%s\t%d\t%d\t%d\n", sp->name, sp->midterm, sp->final, sp->average, sp->average);

		if (sp->average >= 80)
			sp->grade = 'A';
		else if (sp->average >= 50)
			sp->grade = 'B';
		else
			sp->grade = 'F';
		sp++;
	}

	sp = s;//초기화 필요

	printf("\n\n이름\t학점\n");
	for (i = 0; i < 3; i++){
		printf("%s\t%c\n", sp->name, sp->grade);
		midsum  += sp->midterm;
		finalsum += sp->final;
		sp++;
	}

	printf("\n중간고사의 평균: %d\n학기말고사의 평균: %d\n", midsum/3, finalsum/3);
}