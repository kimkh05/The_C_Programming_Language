#include<stdio.h>
int main(){
	int n, m;
	int sum = 0;
	int arr[100][100] = {0, };
	scanf("%d %d", &n, &m);
	for(int i = n-1;i>=0;i--){
		for(int j = 0;j<m;j++){
			sum++;
			arr[i][j] = sum;
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
