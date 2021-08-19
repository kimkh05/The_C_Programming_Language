#pragma warning(disable : 4996)
#pragma warning(disable : 6013)
#include<stdio.h>
#include<string.h>
int main(){
	int arr[100][100] = {0, };
	int n;
	int str = 0;
	scanf("%d", &n);
	for(int i = 0;i<n;i++){
		str = 1;
		for(int j =0;j<n;j++){
			arr[i][j] = str;
			str++;
		}
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<=i;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
