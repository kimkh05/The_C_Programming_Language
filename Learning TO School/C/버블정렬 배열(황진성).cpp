#include <stdio.h>

void bubbleSort(int num, int bubble[]) {
	int temp;
	for(int i = num; i >= 0; i--) {
		for(int j = 0; j > i; j++) {
			if(bubble[j] > bubble[j+1]) {
				temp = bubble[j];
				bubble[j] = bubble[j+1];
				bubble[j+1] = temp;
//				for(int k = 0; k < num; k++) {
//					printf("%d", bubble[k]);
//				}
//				printf("\n");
			}
		}
	}
}
int main() {
	int num;
	int bubble[10] = {0, };
	scanf("%d", &num);
	for(int i = 0; i < num; i++) {
		scanf("%d", &bubble[i]);
	}
	bubbleSort(num, bubble);
	for(int j = 0; j < num; j++) {
		printf("%d ", bubble[j]);
	}
}
