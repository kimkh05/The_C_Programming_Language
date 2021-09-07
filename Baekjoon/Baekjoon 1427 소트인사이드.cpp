#include<stdio.h>
#include<string.h>
int main(){
	int n;
	int arr[1000000000] = {0, };
	int j = 0;
	scanf("%d", &n);
	for(int i = 10; i<1000000000;i*=10){
		if(n / i >0) {
			arr[j] = n/i;
			j++;
		}
	}
	for(int i = 0;i<10;i++){
		printf("%d", arr[i]);
	}
	
}
