//LAB11_2
#include <stdio.h>
struct student {  
	char name[20]; 
	int midterm; 
	int final;
	int average;
}; 
typedef struct student Student;//  typedef 를 사용하여 Student 를 정의 
 
/*void printStudent(Student aStudent) 
{
	printf("%s\t", aStudent.name);
	printf("%d\t%d\t%d\n", aStudent.midterm, aStudent.final, aStudent.average);
} 
 
int main(void) 
{  
	Student s[40];  
	int num, i; 
	
	printf("Enter a number of student:"); 
	scanf("%d", &num); 
 
	for (i = 0; i < num; i++)  {  
		printf("Enter student name: ");    //a)  
		scanf("%s", s[i].name);    //b)   
		printf("Enter midterm and final score: "); //c)  
		scanf("%d %d", &s[i]. midterm, &s[i].final); //d)
	}  
	
	for (i = 0; i < num; i++)   
		s[i].average = (s[i].midterm + s[i].final)/2; // e) 
 
	printf("\n 이름\t중간\t 학기말\t 평균\n");  
	for (i = 0; i < num; i++)   
		printStudent(s[i]); 
}*/
 
//LAB11_2_0
/*void printStudent(Student *aStudent) 
{
	printf("%s\t", aStudent->name);
	printf("%d\t%d\t%d\n", aStudent->midterm, aStudent->final, aStudent->average);
} 
 
int main(void) 
{  
	Student s[40];  
	int num, i; 
	
	printf("Enter a number of student:"); 
	scanf("%d", &num); 
 
	for (i = 0; i < num; i++)  {  
		printf("Enter student name: ");    //a)  
		scanf("%s", s[i].name);    //b)   
		printf("Enter midterm and final score: "); //c)  
		scanf("%d %d", &s[i]. midterm, &s[i].final); //d)
	}  
	
	for (i = 0; i < num; i++)   
		s[i].average = (s[i].midterm + s[i].final)/2; // e) 
 
	printf("\n 이름\t중간\t 학기말\t 평균\n");  
	for (i = 0; i < num; i++)   
		printStudent(&s[i]); //포인터+배열!!!
}*/
//LAB11_2_1
void calculateStudentAverage(Student *s) 
{
	s->average = (s->midterm + s->final)/2;// e)
}
void readStudentScore(Student *s)
{
	printf("Enter student name: ");    //a)  
	scanf("%s", s->name);    //b)   
	printf("Enter midterm and final score: "); //c)  
	scanf("%d %d", &s->midterm, &s->final); //d)
}
void printStudent(Student *aStudent) 
{
	printf("%s\t", aStudent->name);
	printf("%d\t%d\t%d\n", aStudent->midterm, aStudent->final, aStudent->average);
} 
 
int main(void) 
{  
	Student s[40];  
	int num, i; 
	
	printf("Enter a number of student:"); 
	scanf("%d", &num); 
 
	for (i = 0; i < num; i++)
		readStudentScore(&s[i]);  
	
	for (i = 0; i < num; i++)   
		calculateStudentAverage(&s[i]);
	 
 
	printf("\n 이름\t중간\t 학기말\t 평균\n");  
	for (i = 0; i < num; i++)
		printStudent(&s[i]); //포인터+배열!!!
}
