#pragma warning(disable : 4996)
#pragma warning(disable : 6013)
#include<stdio.h>
#include<string.h> 
int main() {
	int arr[2][3] = { 0, };
	int arr1[2][3] = { 0, };
	printf("first array\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	printf("second array\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d ", arr[i][j] * arr1[i][j]);
		}
		printf("\n");
	}
}
