#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(void){
	char num1 = 24;
	char num2 = -25;
	char result = fabs(num1--) - fabs(++num2);
	printf("%.0f", result);
	return 0;
}
