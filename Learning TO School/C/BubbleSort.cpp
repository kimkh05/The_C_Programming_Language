#include<stdio.h>
void bubbleSort(int n, int arr[]){
	int temp;
	for(int i = n-1;i>=0;i--){
		for(int j = 0;j<i;j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
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
	bubbleSort(n, arr);
	for(int i = 0;i<n;i++) printf("%d ", arr[i]);
	return 0;
}
