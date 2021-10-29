#include<stdio.h>
void insertSort(int a[], int size){
	int temp;
	printf("insertSort\n\n");
	for(int i = 1;i<size;i++){
		temp = a[i];
		int j = i;
		while((j>0)&&(a[j-1]>temp)){
			a[j] = a[j-1];
			j--;
		}
		a[j] = temp;
		for(int k = 0;k<size;k++) printf("[%d] ", a[k]);
		printf("\n\n");
	}
}
void bubbleSort(int a[], int size){
	int temp;
	printf("bubbleSort\n\n");
	for(int i = size-1;i>0;i--){
		for(int j = 0;j<i;j++){
			if(a[j]>a[j+1]){
				temp=  a[j];
				a[j]=  a[j+1];
				a[j+1] = temp;
			}
			for(int j = 0;j<size;j++) printf("[%d] ", a[j]);
			printf("\n\n");
		}
		
		printf("\n\n");
	}
}
int main(){
	int arrSize = 5;
	int arr[arrSize] = {40, 50, 30, 20, 10};
	int arr1[arrSize] = {40, 50, 30, 20, 10};
	insertSort(arr, arrSize); 
	bubbleSort(arr1, arrSize);
}

