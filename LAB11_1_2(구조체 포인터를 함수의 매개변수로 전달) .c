//�ø������� ���� ���� �ȵ�
#include <stdio.h> 
#include <stdlib.h>
typedef struct {
	int midterm, final;
}Score;   
 
void printScore(Score *p) //2) 
{      
	printf("�߰���� ������ %d\n",p->midterm);    
	printf("�б⸻��� ������ %d\n",p->final); 
}
Score *biggerScore(Score *p1, Score *p2) //3) 
{ 
	if (p1->midterm+p1->final > p2->midterm+p2->final)
		return p1;
	else
		return p2;
}
Score totalScore(Score *p1, Score *p2, Score *tp) //4)
{ 
	tp->midterm = p1->midterm + p2->midterm;
	tp->final = p1->final + p2->final;
 
	return *tp;
}
Score createScore(int m, int f) //5) 
{ 
	Score temp;
 
	temp.midterm = m;
	temp.final = f;

	return temp;
} 

int main(void)
{ 
     Score s1, s2, s3;      
	 s1.midterm = 50; 
	 s1.final = 100;    
	 s2.midterm = 70;
	 s2.final = 70;     
	 
	 printf("1)-----------------------------\n");  
	 printScore(&s1);     
	 printScore(&s2);     
	 printf("2)-----------------------------\n"); 
	 printf("�� �� ������ ���� ����:\n");     
	 printScore(biggerScore(&s1, &s2));      //���ؾȵ�
	 printf("3)-----------------------------\n");   
	 printf("�� ������ �� ��:\n");    
	 printScore(&totalScore(&s1, &s2, &s3)); //���ؾȵ�  
	 printf("4)-----------------------------\n");    
	 s3 = createScore(99, 99);    
	 printScore(&s3); 
} 