//do-while.c
#include <stdio.h>

int main(void) {
	int age;

	printf("Welcom to __The Program__!\n\n");

	do {
		printf("Enter your age: ");
		scanf_s("%d", &age);

		if (age >= 18) {
			printf("Access granted! ");
			printf("Welcome to the SECRET section!\n");
			//break;
		}
		else if (age > 0) {
			printf("Sorry, you must be 18 or older!\n");
		}
		else {
			printf("Inbalid input. Enter a postive number.\n");
		}
	} while (age <= 0);

	printf("Program end.\n");

	getch();

	return 0;
}