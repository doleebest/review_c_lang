#include <stdio.h>
# define _CRT_SECURE_NO_WARNINGS


int main(void) {
	// ö��, ö��, ����, ���� �� ����, ����, ����, ���� �Է�
	int arr[4][4];
	int i, j, k;
	for (i = 0; i < 4; i++)
		for (j = 0; j < 4; j++)
			scanf("%d ", &arr[i][j]);
	

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		
		//total
		int sum = 0;
		for (k = 0; k < 4; k++)
			sum += arr[i][k];

		printf("%d ", sum);
		printf("\n");
	}
	return 0;
}