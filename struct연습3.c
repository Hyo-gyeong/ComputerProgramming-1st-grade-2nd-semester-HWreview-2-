// 연습#3
//totalScore1과 totalScore2는 같은 일을 하는 함수이다. 
//둘의 차이(구현에 있어서의)를 잘 살펴보라
typedef struct {
	int midterm;
	int final;
}Score;

#include <stdio.h>

void printScore(Score *p)
{
	printf("중간고사 성적은 %d\n", p->midterm);
	printf("학기말고사 성적은 %d\n", p->final);
}

Score totalScore1(Score *p1, Score *p2)
{
	Score total;

	total.midterm = p1->midterm + p2->midterm;
	total.final = p1->final + p2->final;

	return total;
}

void totalScore2(Score *p1, Score *p2, Score *total)
{
	total->midterm = p1->midterm + p2->midterm;
	total->final = p1->final + p2->final;
}

int main(void)
{
	Score s1, s2, tempS;

	s1.midterm = 50;
	s1.final = 100;
	s2.midterm = 70;
	s2.final = 70;

	tempS = totalScore1(&s1, &s2);
	printScore(&tempS);
	printf("\n");
	totalScore2(&s1, &s2, &tempS);
	printScore(&tempS);
}