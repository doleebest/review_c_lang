#include <stdio.h>

int main(void) {
	// ö��, ö��, ����, ���� �� ����, ����, ����, ���� �Է�
	int arr[4][4];
	for (int i = 0; i < 4; i++)
		for (int j = 0; j < 4; j++)
			scanf("%d ", &arr[i][j]);
	
	int i;
	for (i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		
		//total
		int sum = 0;
		for (int k = 0; k < 4; k++)
			sum += arr[i][k];

		printf("%d ", sum);
		printf("\n");
	}
	return 0;
}