#include<stdio.h>
int main(){
	int n;
	int i = 0;
	int str = 0;
	int arr[1000] = {0,};
	int arr1[1000] = {0,};
	scanf("%d", &n);
	for(i = 0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(i = 0;i<n;i++){
		scanf("%d", &arr1[i]);
	}
	for(i = 0;i<n;i++){
		int j = n-i-1;
		for(int k = 0;k<j;k++){
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
	/*for(i = 0;i<n;i++){
		
	}*/
	printf("%d\n", str);
	return 0;
}
//7
//11 63 59 35 46 77 67
//93 26 85 74 30 24 26
//4
//1 3 5 7
//7 5 2 1

