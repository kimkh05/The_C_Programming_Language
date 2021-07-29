#include<stdio.h>
int main(){
	int n;
	int arr[100][100] = {0, };
	int sum = 0;
	scanf("%d", &n);
	for(int j = 0;j<n;j++){
		for(int i = 0; i<n;i++){
			sum++;
			arr[i][j] += sum;
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
