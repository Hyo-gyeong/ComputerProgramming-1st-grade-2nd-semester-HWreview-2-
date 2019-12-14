#include <stdio.h>
int main(void)
{
	FILE *fp1, *fp2;
	char ch[100];

	fp1 = fopen("hello.txt", "rt");
	if (fp1 == NULL){
		printf("file open error\n");
		return 1;
	}

	fp2 = fopen("hello2.txt", "wt");
	if (fp2 == NULL) {
		printf("file open error\n");
		return 1;
	}

	fgets(ch, sizeof(ch), fp1);
	while (!feof(fp1)){
		fputs(ch,fp2);
		fgets(ch, sizeof(ch), fp1);
	}

	fclose(fp1);
	fclose(fp2);
}