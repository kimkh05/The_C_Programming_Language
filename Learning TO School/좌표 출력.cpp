#pragma warning(disable:4996)
#include <stdio.h>
struct Coordinates {
	int xpos = 0; 
	int ypos = 0;
};
struct Coordinates c1[3];
void input() {
	for (int i = 0; i < 3; i++) {
		printf("좌표 P%d : ", i + 1);
		scanf("%d %d", &c1[i].xpos, &c1[i].ypos);
	}
}
void swap() {
	int tmp = 0;
	for (int i = 0; i < 2; i++) {
		for (int j = 1; j < 3; j++) {
			if (c1[i].xpos > c1[j].xpos) {
				tmp = c1[i].xpos;
				c1[i].xpos = c1[j].xpos;
				c1[j].xpos = tmp;
				tmp = c1[i].ypos;
				c1[i].ypos = c1[j].ypos;
				c1[j].ypos = tmp;
			}
			else if (c1[i].xpos == c1[j].xpos) {
				if (c1[i].ypos > c1[j].ypos) {
					tmp = c1[i].ypos;
					c1[i].ypos = c1[j].ypos;
					c1[j].ypos = tmp;
				}
				
			}
			
		}
	}
}
void print() {
	printf("좌표 순서대로 출력\n");
	for (int i = 0; i < 3; i++) {
		printf("[%d, %d]\n", c1[i].xpos, c1[i].ypos);
	}
}
int main() {
	input();// 입력 
	swap(); // 바꿈
	print(); // 출력
	return 0;
}
// 좌표 출력 코드 
