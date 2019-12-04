#include <stdio.h>
int main(void)
{
	FILE *fp, *fp2;
	char str;

	fp = fopen("read.txt", "r");//파일의 모든 문자를 읽어오고 위치지시자를 맨 처음으로 둠.
	if (fp == NULL){
		printf("file open error");
		return 1;
	}

	str = fgetc(fp);
	printf("%c", str);
	str = fgetc(fp);
	printf("%c", str);
	str = fgetc(fp);
	printf("%c", str);
	str = fgetc(fp);
	printf("%c", str);
	fputc(str, stdout); // 파일에 적을 수도 있음.
	/*fgetc함수는 호출할 때마다 순차적으로 문자를 하나씩 가져옴.fgetc함수가 한 번 읽을때마다 '위치지시자'를 
	를 하나씩 늘려 다음문자를 가리킴.*/

	fp2 = fopen("textWirte", "w");
	if (fp2 == NULL) {
		printf("file open error");
		return 1;
	}

	printf("%c", fputc('h', fp2));//파일에도 쓰이고 화면에서 출력됨.
	printf("%c", fputc('i', stdout));//+화면에 다시 출력.
	fputc(fgetc(fp), fp2); //fp위치지시자가 끝난 곳에서부터 글자 하나를 fp2에 출력
	fputc(fgetc(fp), stdout);//fp위치지시자가 끝난 곳에서부터 글자 하나를 화면에 출력

	fclose(fp);// 모든 문자를 호출하고 위치지시자가 끝에 가면 -1를 복귀값으로 돌려줌.
	fclose(fp2);
}