#include <stdio.h>

void SquareByValue(int num) {
	printf("%d \n", num * num);
}

void SquareByReference(int * num) {
	printf("%d \n", * num * *num);
}

int main(void) {
	int a = 2;
	SquareByValue(a);
	SquareByReference(&a);
	return 0;
}