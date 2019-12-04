#include <stdio.h>
int main(void)
{
	char ch;
	char str;
	ch = getchar();
	printf("%c\n", ch);
	putchar(ch);
	/*버퍼를 사용하기때문에 엔터가 들어올때까지 입력버퍼에 '계속' 담아두었다가 엔터가 들어오면 
	입력된 내용에서 첫 글자를	리턴함.
	따라서 잘못 입력해도 엔터를 치기 전까지는 수정이 가능.*/

	while ((str = getchar()) != '\n'){
		putchar(str);
	}
	/*'\n'를 종료로 인식. getchar에서 첫번째 글자를 인식하고 출력후 다음글자가 입력버퍼에 남아있으므로 
	그 글자를 str에 저장하고 다시 출력하는 실행함. 마지막에 엔터가 들어가면 그걸 보고 while문 탈출*/
}