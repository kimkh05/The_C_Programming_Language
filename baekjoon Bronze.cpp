#pragma warning(disable:4996)
// ���� #9 ����ü�� �Ǽ� ���� �ϱ�
// �й� : 1102
// �̸� : ���ȣ 
#include <stdio.h>
// ����ü ���� �κ�
struct menu{
	double num = 0;
	int decpt = 0, sign = 0;
};
struct menu m1[10];
// �Լ� ���� �κ�
int input(){ //�Է� ���� �Լ� 
	int n = 0;
	printf("�Ǽ� �Է� ���� : ");
	scanf("%d", &n);
	return n;
}
void input1(int a){ //�Ǽ� �Է� �Լ� 
	for(int i=0;i<a;i++){
		printf("�Ǽ� %d : ", i+1);
		scanf("%lf", &m1[i].num);
	}
}
void value(int b){ //�� �Լ� 
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
void print(int c){ //��� �Լ� 
	printf("\n�Ǽ� ���\n\n");
	for(int i=0;i<c;i++){
		printf("%d ��° �Ǽ�--------------------------\n", i+1);
		printf("digits : %.0lf\n", m1[i].num);
		printf("decpt : %d\n", m1[i].decpt);
		printf("sign : %d\n", m1[i].sign);
	}
	
}
// main �Լ�
int main() { //���� �Լ� 
	int n = 0;
	n = input();
	input1(n);
	value(n);
	print(n);
return 0;
}
// �Լ� ���Ǻκ�
