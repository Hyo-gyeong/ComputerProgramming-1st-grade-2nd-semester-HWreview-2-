//����ü ���� printPerson1, 2
typedef struct{
	char name[10];
	int age;
} Person;

#include <stdio.h>
void printPerson1(Person p)
{
	printf("�̸� %s ���� %d\n", p.name, p.age);
	p.age = 40; // ���纻�� �ٲ�, ������ �ٲ��� ����
}
void printPerson2(Person *p)
{
	printf("�̸� %s ���� %d\n", p->name, p->age);
	p->age = 40; //���� �ٲ�
}
void printPeople(Person *p, int size)
{
	int i;

	for (i = 0; i < 3; i++){
		printf("�̸� %s ���� %d\n", p->name, p->age);
		p++;
	}
}
int main(void)
{
	Person person = {"Suehee", 30};
	Person people[3] = {{"����", 38},{"�����", 37},{"������", 32}};

	printPerson1(person);//�޸𸮻� �����
	printPerson2(&person);//�ּ�����
	printPerson1(person);
	printPeople(people, 3);
}