#include <stdio.h>
#include <conio.h>
int main(void)
{
	char ch;
	char ch2;
	char chStr;
	char ch2Str;

	ch = getch();
	printf("%c", ch);
	putchar(ch);
	putch(ch);
	//세개 다 나옴.
	printf("\n");
	/*getch()는 버퍼를 사용하지 않음.
	키보드를 눌렀다 떼는 동시에 그 값을 가져가 버리기때문에 백스페이스를 누르면 삭제는 커녕 백스페이스값이 들어가버림
	입력버퍼를 사용하지 않기때문에 엔터를 입력할 때까지 기다리지 않고 입력값을 화면에 보여주지 않고 바로 출력함
	결과로 나온 글자는 입력한 글자는 무시되고 출력으로 인해 나타난 글자임*/

	while ((chStr = getch()) != '\r') //'\n'으로 두면 신비로운 경험을 할 수 있음 ㅎㅎ
		putchar(chStr);
	printf("\n종료\n");
	/*\r란 케리지 리턴으로 커서를 현재 행의 처음위치로 돌리는 것이기 때문에 '\n'을 while문 종료
	조건으로 주게되면 반복문이 끝나지도 않고 계속 입력을 받게된다.
	getche도 마찬가지!*/

	ch2 = getche();
	printf("%c", ch2);
	putchar(ch2);
	putch(ch2);
	//세개 다 나옴.
	/*getche()는 버퍼를 사용하지 않음.
	getch()와의 차이는 입력값을 화면에 출력한다는점. getche의 e가 echo*/
}