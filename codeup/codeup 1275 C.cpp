#include<stdio.h>
int main(){
	int n, k;
	int num = 1;
	scanf("%d %d", &n, &k);
	for(int i = 0;i<k;i++){
		num = num*n;
	}
	printf("%d\n", num);
	return 0;
}
