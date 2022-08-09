#include <stdio.h>

int main(void)
{
	int arr2d[3][3];
	printf("%d \n", arr2d);
	printf("%d \n", arr2d[0]);
	printf("%d \n\n", &arr2d[0][0]);

	printf("%d \n", arr2d[1]);
	printf("%d \n\n", &arr2d[1][0]);

	printf("%d \n", arr2d[2]);
	printf("%d \n\n", &arr2d[2][0]);

	printf("sizeof(arr2d):%d \n", sizeof(arr2d));      // 배열이름 대상 sizeof 연산 -> 배열 전체의 크기 반환
	printf("sizeof(arr2d[0]):%d \n", sizeof(arr2d[0])); // 각 행의 크기를 반환
	printf("sizeof(arr2d[1]):%d \n", sizeof(arr2d[1]));
	printf("sizeof(arr2d[2]):%d \n", sizeof(arr2d[2]));
	return 0;

}