#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int stack[10000];
int top = -1;
int i = 0;
void stackValue(){
	int n;
	char a[100] = {0, };
	scanf("%s", a);
	if(!strcmp(a, "push")) {
		scanf("%d", &n);
		top++;
		stack[top] = n;
		return;
	}
	else if(!strcmp(a, "pop")){
		if(top != -1){
			 printf("%d\n", stack[top]); 
			top--;
			stack[top] = NULL;
		}
		else printf("%d\n", -1);
		return;
	}
	else if(!strcmp(a, "size")) {
		printf("%d\n", top + 1);
		return;
	}
	else if(!strcmp(a, "empty")){
		int temp;
		if(top == -1) temp = 1;
			else temp = 0;
		printf("%d\n", temp);
		temp = NULL;
		return;
	}
	else if(!strcmp(a, "top")){
		if(top == -1) printf("%d\n", -1);
		else printf("%d\n", stack[top]);
		return;
	}
	else printf("error");
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0;i<n;i++){
		stackValue();
	}
}
