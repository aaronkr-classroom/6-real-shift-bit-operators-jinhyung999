//lamp.c
#include <stdio.h>

unsigned char LampOff(unsigned char dest, unsigned char bit);
unsigned char LampOn(unsigned char deat, unsigned char bit);

int main(void) {
	unsigned char lamp = 0x7F;//lamp on 0111 1111 0x7F
	printf("Lamp off\n");
	printf("%x->", lamp);
	lamp = LampOff(lamp, 3); //lamp off 0111 0111 0x77
	printf("%x\n", lamp);

	printf("\n%x->", lamp);//lamp off 0111 0111 0x77
	lamp = LampOn(lamp, 3); //lamp on 0111 1111 0x7F
	printf("%x\n", lamp);
	printf("Lamp on\n");
	return 0;
}

unsigned char LampOff(unsigned char dest, unsigned char bit) {
	if (bit < 8) {
		dest = dest & ~(0x01 << bit);//AND 사용하면 0으로 설정
	}
	return dest;
}
unsigned char LampOn(unsigned char dest, unsigned char bit) {
	if (bit < 8) {
		dest = dest | ~(0x01 << bit);//Or 사용하면 0으로 설정
	}
	return dest;
}