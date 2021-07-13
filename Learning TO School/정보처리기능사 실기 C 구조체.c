#include<stdio.h>
struct function{
	int num1;
	int num2;
};

void main(){
	struct function v1; struct function v2;
	v1.num1 = 19; v1.num2 = 42;
	v2.num1 = 30; v2.num2 = 12;
	
	if(v1.num1 < v1.num2) printf("%d ", v1.num1 & v1.num2 | v2.num1);
	if(v2.num1 > v2.num2) printf("%d ", v2.num1 | v2.num2 & v1.num1);
	return 0;
}
