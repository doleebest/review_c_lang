#include <stdio.h>

int main(void) {
	int arr[6] = { 1,2,3,4,5,6 };
	int* ptr1 = &arr[5];
	int* ptr2 = &arr[0];
	int temp; 

	for (int i = 0; i <3; i++) {
		temp = *ptr1; // ���� �ٲ�� �ϹǷ� * ǥ�ø� ����
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr2++;      // �ּҰ��� �ٲٹǷ� * ����
		ptr1--;
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}