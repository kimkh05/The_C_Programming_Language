#include<stdio.h>
int arr[10000000];
int arr1[100000];
int main(){
	int n;
	int m;
	int low = 0;
	int mid;
	scanf("%d", &n); // ù �迭 ũ�� 
	int high = n-1;
	for(int i = 0;i<n;i++){
		scanf("%d", &arr[i]); // �迭 �� �Է� 
	}
	scanf("%d", &m); // �ι�° �迭 
	for(int i = 0; i< m ; i++){
		scanf("%d", &arr1[i]); // �迭 �� �Է� 
	}
	
	return 0;
}
