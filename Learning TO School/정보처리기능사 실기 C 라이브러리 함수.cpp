#include<stdio.h>
#include<stdlib.h>
int function(int, int);
int main(){
	int result;
	result = function(20, -31);
	
	printf("두수의 차이는 : ");
	printf("%d", result);
}
int function(int i, int j){
	int result;
	result = abs(i) + abs(j);
	
	return result;
}
