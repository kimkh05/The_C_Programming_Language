#pragma warning(disable : 4996)
#pragma warning(disable : 6013)
#include<stdio.h>
struct score {
	int sc1 = 0;
	int sc2 = 0;
	int sc3 = 0;
};
struct score sc[3];
void print() {
	int avg[3] = { 0, };
	int str = 0;
	int str1 = 0;
	int str2 = 0;
	int avgstr = 0;
	for (int i = 0; i < 3; i++) {
		avg[i] = sc[i].sc1 + sc[i].sc2 + sc[i].sc3;
		str += sc[i].sc1;
		str1 += sc[i].sc2;
		str2 += sc[i].sc3;
		avgstr = str + str1 + str2;
	}
	for (int i = 0; i < 3; i++) {
		printf("%d %d %d %d\n", sc[i].sc1, sc[i].sc2, sc[i].sc3, avg[i]);
	}
	printf("%d %d %d %d\n", str, str1, str2, avgstr);
	
}
int main() {
	for (int i = 0; i < 3; i++) {
		scanf("%d %d %d", &sc[i].sc1, &sc[i].sc2, &sc[i].sc3);
	}
	print();
}
