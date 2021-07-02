#include<stdio.h>
int main() {
	int num = 0;
	int arr[3] = { 1, 2, 3 };
	int* p = arr;

	printf("num : %d, p : %p, *p : %d, arr[0] : %d, arr[1] : %d, arr[2] : %d\n", num, p, *p, *arr, *(arr + 1), *(arr + 2));
	num = (*p)++;
	printf("num : %d, p : %p, *p : %d, arr[0] : %d, arr[1] : %d, arr[2] : %d\n", num, p, *p, *arr, *(arr + 1), *(arr + 2));
	num = ++(*p);
	printf("num : %d, p : %p, *p : %d, arr[0] : %d, arr[1] : %d, arr[2] : %d\n", num, p, *p, *arr, *(arr + 1), *(arr + 2));
	num = *(p++);
	printf("num : %d, p : %p, *p : %d, arr[0] : %d, arr[1] : %d, arr[2] : %d\n", num, p, *p, *arr, *(arr + 1), *(arr + 2));
	num = *(++p);
	printf("num : %d, p : %p, *p : %d, arr[0] : %d, arr[1] : %d, arr[2] : %d\n", num, p, *p, *arr, *(arr + 1), *(arr + 2));
	return 0;
}
