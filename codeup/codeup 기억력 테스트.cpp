#include<stdio.h>
int arr[10000000];
int arr1[100000];
int main(){
	int n;
	int m;
	int low = 0;
	int mid;
	scanf("%d", &n); // 첫 배열 크기 
	int high = n-1;
	for(int i = 0;i<n;i++){
		scanf("%d", &arr[i]); // 배열 값 입력 
	}
	scanf("%d", &m); // 두번째 배열 
	for(int i = 0; i< m ; i++){
		scanf("%d", &arr1[i]); // 배열 값 입력 
	}
	
	return 0;
}
