#include<stdio.h>
int main(){
	int arr[100][100]={0,};
	int n;
	int count=0;
	scanf("%d", &n);
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			count++;
			arr[i][j] += count;
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = n-1;j>=0;j--){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
