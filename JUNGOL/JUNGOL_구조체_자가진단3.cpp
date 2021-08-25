#include<stdio.h>
struct menu{
	char name[20];
	int korean;
	int english;
};
int main(){
	struct menu m1[2];
	int avg, avg1;
	for(int i = 0;i<2;i++){
		scanf("%s %d %d", m1[i].name, &m1[i].korean, &m1[i].english);
		avg += m1[i].korean;
		avg1 += m1[i].english;
	}
	avg /= 2;
	avg1 /=2;
	for(int i = 0;i<2;i++){
		printf("%s %d %d\n", m1[i].name, m1[i].korean, m1[i].english);
	}
	printf("avg %d %d\n", avg, avg1);
	return 0;
} 
