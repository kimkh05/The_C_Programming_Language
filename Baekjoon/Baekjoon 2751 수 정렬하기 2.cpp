#include<stdio.h>
#include<iostream>
using namespace std;
void bubble_sorting(int arr[], int n){
	int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;           
			}
        }
    }
}
int main(){
	int num[1000001];
	int n;
	scanf("%d", &n);
	for(int i = 0;i<n;i++) scanf("%d", &num[i]);
	bubble_sorting(num, n);
	for(int i = 0;i<n;i++) cout << num[i];
	return 0;
}
