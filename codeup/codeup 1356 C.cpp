#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	for(int i= 0;i<n;i++){
		if(i==0){
			for(int j = 0;j<n-2;j++) printf("*");
		}
		for(int j = 0;j<n-1;j++){
			if(j!=0&&j<n-1) {
				if(i!=0&&i!=n-1) printf(" ");
			}
			else printf("*");
		}
		printf("*");
		
		if(i==n-1){
			for(int j = 0;j<n-2;j++) printf("*");
		}
		printf("\n");
	}
	return 0;
}
