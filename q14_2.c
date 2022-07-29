#include <stdio.h>

void Swap3(int* num1, int* num2, int* num3) {
	int* tmp;
	tmp = *num3;
	*num3 = *num2;
	*num2 = *num1;
	*num1 = tmp;
}
int main(void) {
	int num1 = 1;
	int num2 = 2;
	int num3 = 3;
	Swap3(&num1, &num2, &num3);
	printf("%d ", num1);
	printf("%d ", num2);
	printf("%d ", num3);
}