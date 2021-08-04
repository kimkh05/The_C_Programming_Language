#include<stdio.h>
int prime(int n){
	int str = 0;
	for(int i = 1;i<=n;i++){
		if(n%i==0) str++;
	}
	return str;
}
int main(){
	int n;
	int a = 0;
	scanf("%d", &n);
	a = prime(n);
	if(a==2) printf("prime\n");
	else printf("not prime\n");
	return 0;
}
