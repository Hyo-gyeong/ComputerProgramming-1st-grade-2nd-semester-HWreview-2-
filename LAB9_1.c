#include <stdio.h>
int main(void)
{
	char c;

	printf("Enter 문자열(q이전까지 문자열로 인정함)\n");

	c = getchar();
	while (!(c == 'q')){
		putchar(c);
		c = getchar();
	}
	
	printf("\n---------------------------------\n");
	
	printf("Enter 문자열(q이전까지 문자열로 인정함)\n");
	while (getchar() != '\n'); //버퍼 비움
	c = getchar();
	while (!(c == 'q')){
		putchar(c);
		c = getchar();
	}
	putchar('\n');
}