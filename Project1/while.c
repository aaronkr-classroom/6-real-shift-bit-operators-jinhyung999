//while.c
#include <stdio.h>

int main(void) {


	int sum1 = 0;//첫 시도
	int sum2 = 1;//두번째 시도
	int sum3 = 3;//세번째 시도

	int count = 1;
	while (count <= 10) {
		printf("sum(%d)*count(%d )= ", sum3, count);
		sum3 = sum3 * count;
		printf("%d\n", sum3);

		count++;
	}
	printf("\nTotal: count = %d, sum = %d", count, sum3);
	
	return 0;
}