#include<stdio.h>
int n;
int b = 1;
void f(int a){
	printf("%d ", b);
	b++;
	if(a==1) return;
	f(a-1);
}
int main(){
	scanf("%d", &n);
	f(n);
}
