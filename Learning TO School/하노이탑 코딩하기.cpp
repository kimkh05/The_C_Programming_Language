#pragma warning(disable:4996)
#include<stdio.h>
void hanoi(int n, char a, char b, char c){
	if(n==1) printf("%c->%c\n", a, c);
	else{
		hanoi(n-1, a,c,b);
		printf("%c->%c\n", a, c);
		hanoi(n-1, b, a, c);
	}
}
int move(int n){
	int num = 1;
	for(int i = 0;i<n;i++){
		num *= 2;
	}
	return num-1;
}
int main(){
	int n;
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');  
	printf("ÃÑ ÀÌµ¿ È½¼ö : %d\n", move(n));
}
//ÇÏ³ëÀÌÅ¾
