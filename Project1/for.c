//for.c
#include <stdio.h>
#include <string.h>

int main(void) {
	char* string = "Hanbat National University";
	
	//strlen()==char배열의 길이
	for (int i = 0; i < strlen(string); i++) {
		
		if (string[i] == 'a') {
			char upper = string[i] - 32;
			printf("index %d: %c\n", i, upper);
		}
		else if (string[i] == ' ') {
			continue;
		}
		else {
			printf("index %d: %c\n", i, string[i]);
		}
	}
	
	return 0;
}