#pragma warning(disable : 4996)
#include<stdio.h> 
int main() {
    int arr[4][2] = { 0, };
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
    for (int i = 0; i < 4; i++) {
        printf("%d ", (arr[i][0]+arr[i][1])/2); //1번째 줄을 출력함.
    }
    printf("\n");
    for (int j = 0; j < 2; j++) {
        printf("%d ", (arr[0][j] + arr[1][j]+arr[2][j]+arr[3][j]) / 4); //2번째 줄을 출력함.
    }
    printf("\n");
    printf("%d\n", sum / 8); //마지막줄 출력.
}
//배열2 형성평가 8번
