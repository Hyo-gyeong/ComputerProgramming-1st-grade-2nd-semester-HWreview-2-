//9_0_1, 9_0_2, 9_0_2a, 9_0_2b
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main(void) 
{
	//9_0_1
	//scanf - printf는 공백을 저장할 수가 없다. 마지막에 '\0'넣고 저장 붙어있는 글자 하나 저장함.
	//gets - puts는 엔터키 누를기 전까지 1줄 그대로 저장, '\0'로 마무리 즉, 엔터를 '\0'로 바꿔줌, *특징* 함수의 크기에 전혀 제한을 두지 않으며 오류만 내보냄
	//예) str[5]; 에 123456입력하면 그대로 출력하고 corrupted창 내보냄.
	//fgets - fputs/puts는 '\0'를 포함한 문자열을 받음.즉 엔터를 치면 문자+엔터+NULL이되어 엔터도 출력됨.
	//이를 막는 방법 str[strlen(변수이름)-1] = '\0';이렇게 해주기
	/*char ch;  
	
	while(1)  {   
		scanf("%c", &ch); // 예 1)  
		// ch = getchar(); // 예 2)  
		// ch = fgetc(stdin); // 예 3) 
		// ch = getch(); // 예 4)  
		// ch = getche(); // 예 5) 
	
		if( ch == 'q' ) break;  
		putch(ch); // printf("%c", ch), putchar(ch), fputc(ch, stdout)나 모두 같은 결과 
	} */

	//--------------------------------------------
	//9_0_2
	/*char c;
	printf("Enter characters(^Z for exit) : \n"); //콘솔의 경우 ctrl+z가 eof
	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
	//while조건이 != '\n'이 아니라서(?)^Z전까지 프로그램 끝나지 않고 계속 돈다.*/

	//--------------------------------------------
	//9_0_2a

	/*char ch;

	printf("Enter characters(^Z for exit) : \n");
	ch = getchar();
	while (ch != EOF){
		if (islower(ch))
			putchar(toupper(ch));
		else if (tolower(ch))
			putchar(tolower(ch));
		ch = getchar();
	}*/

	//--------------------------------------------
	//9_0_2b

	char ch;

	printf("Enter characters(^Z for exit) : \n");
	while ((ch = fgetc(stdin)) != EOF){
		if (islower(ch))
			fputc(toupper(ch), stdout);	
		else
			fputc(tolower(ch), stdout);
	}
}