#pragma warning(disable : 4996)
#include<stdio.h>
int main(){
	int arr[100] = {0, };
	int n=0;
	int sum = 0;
	scanf("%d",  &n);
	for(int i=0;i<n;i++){
		if(arr[i]%2)
		sum+=arr[i];
	}
	printf("%d", sum);
}
