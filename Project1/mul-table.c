//mul-table.c
#include <stdio.h>

int main(void) {
	int i, j;

	//�� ���� �� 1-9 ���
	printf("  ");//ù ���� ����
	for (i = 1; i <= 9; i++) {
		printf("%4d", i);//%4d ���� 4��		
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