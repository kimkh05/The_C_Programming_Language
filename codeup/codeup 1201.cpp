#include<stdio.h>
int main(){
	int num;
	scanf("%d", &num);
	if(num>0) printf("양수\n");
	else if(num<0) printf("음수\n");
	else printf("0\n");
	return 0;
}
