#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 20;

	int* ptr1 = &num1;
	int* ptr2 = &num2;

	(*ptr1)+=10; // num1 = 20
	(*ptr2)-=10; // num2 = 10

	int* tmp;
	tmp = ptr1;
	ptr1 = ptr2;
	ptr2 = tmp;

	printf("%d \n", *ptr1);
	printf("%d \n", *ptr2);
	return 0;
}