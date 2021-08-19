#include<stdio.h>
int n;
long long int f(int j){
	if(j<=2) return 1;
	return f(j-2)+ f(j-1);
}
int main(){
	scanf("%d", &n);
	printf("%lld\n", f(n));
}
