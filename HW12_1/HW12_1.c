#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
	FILE *fp, *fp2;
	int randNum;
	int i, sum = 0;
	srand(time(NULL));

	fp = fopen("random.txt", "wt");
	if (fp == NULL) {
		printf("file open error");
		return 1;
	}

	for (i = 0; i < 10; i++){
		randNum = rand() % 100;
		sum += randNum;
		fprintf(fp, "%d\n", randNum);
	}

	fclose(fp);

	fp = fopen("random.txt", "rt");
	if (fp == NULL) {
		printf("file open error");
		return 1;
	}
	fp2 = fopen("output.txt", "wt");
	if (fp2 == NULL) {
		printf("file open error");
		return 1;
	}

	fscanf(fp, "%d", &randNum);
	while (!feof(fp)){
		fprintf(stdout, "%d\t", randNum);
		fprintf(fp2, "%d\n", randNum);
		fscanf(fp, "%d", &randNum);		
	}
	printf("\nÃÑÇÕ: %d\n", sum);

	fclose(fp);
	fclose(fp2);
}