#include<stdio.h>
int main() {
	int score[5] = { 0, };
	double sum = 0;
	double avg = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &score[i]);
		if(score[i]<=10) score[i] = 10;
		sum += score[i];
	}
	avg = sum / 5;
	printf("%.0lf\n", avg);
	for (int i = 0; i < 5; i++) {
		if (score[i] >= 0 && score[i] <= 10) printf("10 ���α׷��� ���ʹ�\n");
		else if (score[i] > 10 && score[i] < 45) printf("%d ���α׷��ֹ�\n", score[i]);
		else printf("%d �ٸ� ����� ����\n", score[i]);
	}
	return 0;
}
	
