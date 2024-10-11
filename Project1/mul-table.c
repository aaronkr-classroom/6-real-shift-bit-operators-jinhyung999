//mul-table.c
#include <stdio.h>

int main(void) {
	int i, j;

	//위 제목 행 1-9 출력
	printf("  ");//첫 열의 공간
	for (i = 1; i <= 9; i++) {
		printf("%4d", i);//%4d 공간 4개		
	}
	printf("\n  ------------------------------------\n");
		for(i = 1; i <= 9; i++){
			printf("%d|",i);
			for (j = 1; j <= 9; j++) {
				printf("%4d", i * j);
			}
			printf("\n");
		}

	printf("\n");
}