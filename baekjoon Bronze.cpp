#pragma warning(disable:4996)
// 수행 #9 구조체로 실수 저장 하기
// 학번 : 1102
// 이름 : 김경호 
#include <stdio.h>
// 구조체 선언 부분
struct menu{
	double num = 0;
	int decpt = 0, sign = 0;
};
struct menu m1[10];
// 함수 선언 부분
int input(){ //입력 개수 함수 
	int n = 0;
	printf("실수 입력 개수 : ");
	scanf("%d", &n);
	return n;
}
void input1(int a){ //실수 입력 함수 
	for(int i=0;i<a;i++){
		printf("실수 %d : ", i+1);
		scanf("%lf", &m1[i].num);
	}
}
void value(int b){ //비교 함수 
	for(int i=0;i<b;i++){
		if(m1[i].num<0){
			m1[i].sign= -1;
		}
		else m1[i].sign=1;
	}
	for(int i=0;i<b;i++){
		if(m1[i].sign==1){
			if(m1[i].num>0&&m1[i].num/10==0){
				m1[i].decpt++;
			}
		}
		else if(m1[i].sign==-1){
			if(m1[i].num<0&&m1[i].num/10==0){
				m1[i].decpt++;
			}
		}
	}
	
}
void print(int c){ //출력 함수 
	printf("\n실수 출력\n\n");
	for(int i=0;i<c;i++){
		printf("%d 번째 실수--------------------------\n", i+1);
		printf("digits : %.0lf\n", m1[i].num);
		printf("decpt : %d\n", m1[i].decpt);
		printf("sign : %d\n", m1[i].sign);
	}
	
}
// main 함수
int main() { //메인 함수 
	int n = 0;
	n = input();
	input1(n);
	value(n);
	print(n);
return 0;
}
// 함수 정의부분
