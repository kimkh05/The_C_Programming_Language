#include<stdio.h>
void insertSort(int n, int arr[]){
	int temp;
	for(int i = 0;i<n;i++){
		for(int j = i+1;j<n;j++){
			if(arr[i]>arr[j]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
int main(){
	int n;
	int arr[10] = {0, };
	printf("배열의 크기를 입력하세요(1~10): ");
	scanf("%d", &n);
	if(n>10) {
		printf("잘못입력하셨습니다.\n");
		return 0;
	}
	printf("숫자를 입력하세요.\n");
	for(int i = 0;i<n;i++) scanf("%d", &arr[i]);
	insertSort(n, arr);
	for(int i = 0;i<n;i++) printf("%d ", arr[i]);
	return 0;
}
