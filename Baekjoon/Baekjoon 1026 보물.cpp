#include<stdio.h>
int main(){
	int n; // array number
	int s; // sum
	int a[50]; // Array A
	int b[50]; // Array B
	int temp; // Temp
	scanf("%d", &n); // Input n 
	for(int i = 0;i<n;i++) scanf("%d", &a[i]);
	for(int i = 0;i<n;i++) scanf("%d", &b[i]);
	for(int i = 0;i<n-1;i++){
		for(int j = 0;j<n-1-i;j++){
			if(a[j]<a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	for(int i = 0;i<n-1;i++){
		for(int j = 0;j<n-1-i;j++){
			if(b[j]>b[j+1]){
				temp = b[j];
				b[j] = b[j+1];
				b[j+1] = temp;
			}
		}
	}
	for(int i = 0;i<n;i++) s += a[i] * b[i];
	printf("%d\n", s);
	return 0;
}
