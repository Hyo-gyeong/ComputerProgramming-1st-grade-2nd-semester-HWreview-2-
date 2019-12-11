//구조체 개념 printPerson1, 2
typedef struct{
	char name[10];
	int age;
} Person;

#include <stdio.h>
void printPerson1(Person p)
{
	printf("이름 %s 나이 %d\n", p.name, p.age);
	p.age = 40; // 복사본이 바뀜, 원본은 바뀌지 않음
}
void printPerson2(Person *p)
{
	printf("이름 %s 나이 %d\n", p->name, p->age);
	p->age = 40; //원본 바뀜
}
void printPeople(Person *p, int size)
{
	int i;

	for (i = 0; i < 3; i++){
		printf("이름 %s 나이 %d\n", p->name, p->age);
		p++;
	}
}
int main(void)
{
	Person person = {"Suehee", 30};
	Person people[3] = {{"에릭", 38},{"윤계상", 37},{"서현진", 32}};

	printPerson1(person);//메모리상에 복사됨
	printPerson2(&person);//주소전달
	printPerson1(person);
	printPeople(people, 3);
}