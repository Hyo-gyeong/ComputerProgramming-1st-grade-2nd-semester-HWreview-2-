#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	char name[100] = "Shin Hyo Gyeong";
	char *fn, *mn, *ln;
	char delimiters[] = " ,\n\0";
	char *token;
	int n = 1;

	//fn = strtok(name, " ");
	//mn = strtok(NULL, " ");
	//ln = strtok(NULL, "\0");
	//printf("%s %s %s\n", fn, mn, ln); //c����s
	//
	
	token = strtok(name, delimiters);
	while (token != NULL) { 
		printf("%d ��° ��ū�� %s\n", n++, token);
		token = strtok(NULL, delimiters);
	}
}