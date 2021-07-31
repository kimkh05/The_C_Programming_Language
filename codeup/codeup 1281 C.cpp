#include<stdio.h>
int main(){
	int a, b;
	int sum = 0;
	scanf("%d %d", &a, &b);
	for(int i = a;i<=b;i++){
		if(i%2!=0) {
			sum += i;
			if(i!=a) printf("+%d", i);
			else if(i==a) printf("%d", i);
		}
		else {
			sum -= i;
			printf("-%d", i);
		}
	}
	printf("=%d\n", sum);
	return 0;
}
