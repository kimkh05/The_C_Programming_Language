#include<stdio.h>
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	int n = (a+b)*(a-b);
	printf("%d", n);
	return 0;
} //부분성 공 
