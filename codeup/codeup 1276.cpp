#include<stdio.h>
int main(){
	int n;
	int str = 1;
	scanf("%d", &n);
	while(n>0){
		str *=n;
		n--;
	}
	printf("%d\n", str);
	return 0;
}
