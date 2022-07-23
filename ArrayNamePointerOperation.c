#include <stdio.h>

int main(void) {
	int arr1[3] = { 1,2,3 };
	double arr2[3] = { 1.1,2.2,3.3 };

	printf("%d %g \n", *arr1, *arr2); // %g는 %f와 %e 중에서 짧게 표현할 수 있는 형태로 자동으로 출력
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g \n", arr1[0], arr2[0]);
	return 0;


}