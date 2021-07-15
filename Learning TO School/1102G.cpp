#include<stdio.h>
int main(){
	int n;
	int str = 0;
	int arr[1000] = {0,};
	int arr1[1000] = {0,};
	scanf("%d", &n);
	for(int i = 0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(int i = 0;i<n;i++){
		scanf("%d", &arr1[i]);
	}
	for(int i = 0;i<n;i++){
		
		while(1){
			int j = n-i-1;
			if(arr[i]!=arr1[i]){
					if(arr[i]>arr1[i]){
						arr1[i]++;
						arr1[j]--;
						str++;
					}
					else if(arr[i]<arr1[i]){
						arr1[i]--;
						arr1[j]++;
						str++;
					}
				}
				else break;
		}
	}
	printf("%d", str);
	
}
//7
//11 63 59 35 46 77 67
//93 26 85 74 30 24 26

