#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
#define Arr_MAX 9
int main() {
	int arr[Arr_MAX] = { 1, 3, 5, 6, 9, 11, 13, 15, 21 };
	int key;
	int temp;
	int a;
	int str = 0;
	int n = Arr_MAX / 2;
	scanf("%d", &key); 
	a = Arr_MAX;
	while (n >= 0) {
		if (arr[n] > key) {
			str++;
			a = n;
			if (str > Arr_MAX / 2) {
				n = -1;
				break;
			}
			if (n == 1) n--;
			else n = n / (Arr_MAX / 2) + 1;
		}
		else if (arr[n] < key) {
			str++;
			if (str > Arr_MAX / 2) {
				n = -1;
				break;
			}
			temp = 0;
			for (int i = n; i < a; i++) temp++;
			temp /= 2;
			n += temp;
		}
		else if (arr[n] == key) {
			str++;
			printf("Å½»ö ¼º°ø! \n");
			break;
		}
	}
	if (n < 0) printf("Å½»ö ½ÇÆÐ!\n");
	else printf("ÃÑ È½¼ö : %d\n", str);
	return 0;
}
