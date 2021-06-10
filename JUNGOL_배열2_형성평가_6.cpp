#include<stdio.h>
int main() {
	int arr[6][6] = { {0,1,0,1,0,1}, 0 };
	for (int i = 1; i < 5; i++) {
		for (int j = 1; j < 6; j++) {
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j + 1];
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 1; j < 6; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}
