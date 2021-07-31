#include<stdio.h>
int main(){
	int n;
	int sum = 0;
	int arr[100][100] = {0,};
	scanf("%d", &n);
	for(int i = 0;i<n;i++){
		if(i==0||i%2==0){
			for(int j = 0;j<n;j++){
				sum++;
				arr[i][j] = sum;
			}
		}
		else if(i!=0&&i%2==1){
			for(int j = n-1;j>=0;j--){
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
