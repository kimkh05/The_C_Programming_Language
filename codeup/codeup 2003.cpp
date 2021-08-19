#include<stdio.h>
/*char arr[3][3]= {"*x*", "xx", "* *"};
int main(){
	int n;
	scanf("%d", &n);
	for(int i = 0;i<3;i++){
		for(int j = 0;j<n;j++){
			for(int k = 0;k<3;k++){
				for(int m = 0;m<n;m++){
					printf("%c", arr[i][k]);
				}
			}
			printf("\n");
		}
	}
	return 0;
}*/
char Arr[3][3] = { "*x*", " xx", "* *" }; // 기본아이콘 모양
int main(){
	int num; 
	scanf("%d", &num); 
	for (int i = 0; i < 3; i++){ 
		for (int x = 0; x < num; x++){
		for (int j = 0; j < 3; j++){
				for (int y = 0; y < num; y++){
					printf("%c", Arr[i][j]); 
					// (1,1)->(1,2)->(1,3)->(2,1)순으로 num번 출력 
				} 
			} 
			printf("\n"); 
		} 
	} 
	return 0; 
}
