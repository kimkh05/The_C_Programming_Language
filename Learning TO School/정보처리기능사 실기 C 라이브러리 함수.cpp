#include<stdio.h>
#include<stdlib.h>
int function(int, int);
int main(){
	int result;
	result = function(20, -31);
	
	printf("�μ��� ���̴� : ");
	printf("%d", result);
}
int function(int i, int j){
	int result;
	result = abs(i) + abs(j);
	
	return result;
}
