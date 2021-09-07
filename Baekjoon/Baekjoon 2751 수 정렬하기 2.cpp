#include<stdio.h>
int main(){
	int n;
	int temp;
	int arr[1000000];
	scanf("%d", &n);
	for(int i = 0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(int i = 0;i<n-1;i++){
		for(int j = 1;j<n;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(int i = 0;i<n;i++) printf("%d\n", arr[i]);
	return 0;
}
