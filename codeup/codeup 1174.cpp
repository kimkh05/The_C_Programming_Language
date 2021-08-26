#include<stdio.h>
int main(){
	int h, m;
	scanf("%d %d", &h, &m);
	h+=24;
	m+=h*60;
	m-=30;
	h=m/60;
	h%=24;
	m%=60;
	printf("%d %d", h, m);
	return 0;
}
