#include<stdio.h>
int sum = 0;
int print(long long int n){
	/*if(n<1) return;
	sum+=n%10;
	print(n/10);*/
	int tmp = n%10;
	if(n<=1) return tmp;
	return tmp + print((long long int)(n/10));
}
int main(){
	long long int n;
	scanf("%d", &n);
	printf("%d", print(n));
	return 0;
}
// 다시 풀 예정
 
