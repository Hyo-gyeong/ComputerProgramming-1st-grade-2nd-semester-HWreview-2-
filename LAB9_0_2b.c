//LAB9_0_2b
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main(void)
{
	char c;

	printf("Enter characters(^Z for exit):\n");
	c = fgetc(stdin);
	while (c != EOF) {
		if (islower(c))
			fputc(toupper(c), stdout);
		else
			fputc(tolower(c), stdout);
		c = fgetc(stdin);
	}
}