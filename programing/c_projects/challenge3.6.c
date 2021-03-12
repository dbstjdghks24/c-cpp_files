#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dup(const int com[]) {

	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (com[i] == com[j]) return 1;
		}
	}
	return 0;
}

void strike(const int com[], const int user[], int* st, int *ba) {

	*st = 0; 
	*ba = 0; 

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (com[i] == user[j]) {
				if (i == j) (*st)++;
				else (*ba)++;
			}
		}
	}
}


int main() {

	int user[3];
	int com[3]; 
	int st = 0; 
	int ba = 0; 
	int count = 0; 

	srand((int)time(NULL)); 

	puts("Strat Game!");


	do {
		for (int i = 0; i < 3; i++)
			com[i] = rand() % 10;

	} while (dup(com));


	while (st != 3) {

		printf("3개의 숫자 선택: ");
		for (int i = 0; i < 3; i++)
			scanf_s("%d", &user[i]);

		strike(com, user, &st, &ba);
		printf("%d번째 도전 결과: %dstrike, %dball!!\n", ++count, st, ba);
	}

	puts("\n Game Over!");

	return 0;
}
