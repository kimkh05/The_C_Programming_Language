#include<stdio.h>
int main(){
	int n;
	int arr[100][100] = {0, };
	int sum = 0;
	scanf("%d", &n);
	for(int j = 0;j<n;j++){
		if(j==0||j%2==0){
			for(int i = 0;i<n;i++){
				sum++;
				arr[i][j] = sum;
			}
		}
		else if(j!=0&&j%2==1){
			for(int i = n-1;i>=0;i--){
				sum++;
				arr[i][j] = sum;
			}
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<n;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
